package main

import (
	"encoding/json"
	"flag"
	log "github.com/cihub/seelog"
	"io"
	"io/ioutil"
	"math/rand"
	"net/http"
	"os"
	"time"
)

type O_rsp_bid_ext struct {
	Cm  []string `json:"cm"`
	Pm  []string `json:"pm"`
	S   string   `json:"s"`
	Ldp string   `json:"ldp"`
	//	Type string   `json:"type"`
}

type O_rsp_bid struct {
	Adm   string        `json:"adm"`
	Crid  string        `json:"crid"`
	Id    string        `json:"id"`
	Impid string        `json:"impid"`
	Nurl  string        `json:"nurl"`
	Price float64       `json:"price"`
	Ext   O_rsp_bid_ext `json:"ext"`
}

type O_rsp_seatbid struct {
	Bid []O_rsp_bid `json:"bid"`
}

type rsp struct {
	Bidid   string          `json:"bidid"`
	Id      string          `json:"id"`
	Seatbid []O_rsp_seatbid `json:"seatbid"`
}

type O_req_imp_ext struct {
	Repeat int `json:"repeat"`
}

type O_video struct {
	H           int      `json:"h"`
	W           int      `json:"w"`
	Linerarity  int      `json:"linerarity"`
	Maxduration int      `json:"maxduration"`
	Minduration int      `json:"minduration"`
	Mimes       []string `json:"mimes"`
}

type O_imp struct {
	Id       string        `json:"id"`
	Tagid    string        `json:"tagid"`
	Bidfloor float64       `json:"bidfloor"`
	Ext      O_req_imp_ext `json:"ext"`
	Video    O_video       `json:"video"`
}

type O_req_content_ext struct {
	Channel string `json:"channel"`
	Cs      string `json:"cs"`
	S       string `json:"s"`
	Usr     string `json:"usr"`
	Vid     string `json:"vid"`
}

type O_content struct {
	Ext      O_req_content_ext `json:"exit"`
	Keywords string            `json:"keywords"`
	Title    string            `json:"title"`
}

type O_app struct {
	Content O_content `json:"content"`
	Name    string    `json:"name"`
}

type O_device struct {
	Devicetype int    `json:"devicetype"`
	Didmd5     string `json:"didmd5"`
	Ip         string `json:"ip"`
	Os         string `json:"os"`
	Osv        string `json:"osv"`
	Ua         string `json:"ua"`
}

type O_user struct {
	Id string `json:"id"`
}

type req struct {
	Id     string   `json:"id"`
	Imp    []O_imp  `json:"imp"`
	App    O_app    `json:"app"`
	Device O_device `json:"device"`
	User   O_user   `json:"user"`
}

var buf = make([]byte, 3000)
var count int
var myrand = rand.New(rand.NewSource(time.Now().UnixNano()))

var port = flag.String("port", "80", "listen port")
var path = flag.String("path", "", "request path")
var bidResFile = flag.String("filename", "", "filename used to bid response")

func DspServe(w http.ResponseWriter, r *http.Request) {
	log.Info(*port)
	var response rsp
	err := json.Unmarshal(buf[:count], &response)
	if err != nil {
		return
	}

	reqBody, err := ioutil.ReadAll(r.Body)
	if err != nil {
		return
	}

	var request req
	err2 := json.Unmarshal([]byte(reqBody), &request)
	if err2 != nil {
		return
	}
	// replace resp with req
	response.Id = request.Id
	bid := response.Seatbid[0].Bid
	for i := 0; i < len(bid); i++ {
		if (request.Imp != nil) && len(request.Imp) > 0 {
			bid[i].Impid = request.Imp[0].Id
			bid[i].Price = (request.Imp[0].Bidfloor + 500*myrand.Float64())
		}
		return
	}

	output, err3 := json.Marshal(response)
	if err3 != nil {
		return
	}

	io.WriteString(w, string(output))
}

func readFile(filename string) int {
	file, err := os.Open(filename)
	if err != nil {
		log.Critical(err)
	}

	count, err = file.Read(buf)
	if err != nil {
		log.Critical(err)
	}

	return count
}

func main() {
	flag.Parse()
	logger, err := log.LoggerFromConfigAsFile("seelog.xml")
	if err != nil {
		log.Critical("err parsing config file", err)
		return
	}
	log.ReplaceLogger(logger)

	count = readFile(*bidResFile)
	http.HandleFunc(*path, DspServe)
	http.ListenAndServe(":"+*port, nil)
}
