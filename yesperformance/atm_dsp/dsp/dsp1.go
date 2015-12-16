package main

import (
	"encoding/json"
	"fmt"
	"io"
	"io/ioutil"
	"net/http"
)

type O_rsp_bid_ext struct {
	Cm  []string `json:"cm"`
	Pm  []string `json:"pm"`
	S   string   `json:"s"`
	Ldp string   `json:"ldp"`
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

func DspServe(w http.ResponseWriter, r *http.Request) {
	buf := `{
    "bidid": "1",
    "id": "machineId-07q_-01m8F3-0FI-2Ow",
    "seatbid": [
        {
            "bid": [
                {
                    "adm": "http://v.youku.com/v_show/id_XMTM2MTI3ODU4NA==.html",
                    "crid": "crtRpvKpj3c9198a1",
                    "ext": {
                        "cm": [
                            "http://d.dsp.imageter.com/x?tp=16&isp=spcuoN8Ko48f850bf&isa=dspahuwyB47a769cb_crtRpvKpj3c9198a1_"
                        ],
                        "ldp": "http://aw.kejet.net/c?&v=1449740803&d=fv9&c=nj&m=DrC&n=14&ip=60.17.132.220&f=tudouui&ch=9&yc=120090002&y=14S-spcuoN8Ko48f850bf&id=n584442-14-184-5740803801&g=http%3A%2F%2Ftg.51.com%2Fsearch%2Fwangyeyouxi%2Fshequ.htm%3Ff_source%3Dwyh3_368913%26baidu_domain%3D%25YC%25",
                        "pm": [
                            "http://d.dsp.imageter.com/youku_not?tp=8&isp=spcuoN8Ko48f850bf&isa=dspahuwyB47a769cb_crtRpvKpj3c9198a1_&price=400&ip:60.17.132.220&cookie:gu=1449714797325DKayouku",
                            "http://aw.kejet.net/r/imtr/r?d=fv9&i=60.17.132.220&t=1449714797325DKa&f=tudouui&m=DrC&y=14S-spcuoN8Ko48f850bf&v=1449740803&p=400&ch=9&yc=120090002&id=n584442-14-184-5740803801",
                            "http://aw.kejet.net/u/imtr/m?nvid=1449714797325DKa"
                        ],
                        "s": "2672"
                    },
                    "id": "1",
                    "impid": "0193812230543eb798deea8efd0bf63a",
                    "nurl": "http://aw.kejet.net/r/imtr/r?d=fv9&i=60.17.132.220&t=1449714797325DKa&f=tudouui&m=DrC&y=14S-spcuoN8Ko48f850bf&v=1449740803&p=400&ch=9&yc=120090002&id=n584442-14-184-5740803801",
                    "price": 400.0
                }
            ]
        }
    ]
}`

	var response rsp
	err := json.Unmarshal([]byte(buf), &response)
	if err != nil {
		fmt.Println(err)
	}

	reqBody, err1 := ioutil.ReadAll(r.Body)
	if err1 != nil {
		fmt.Println(err1)
	}

	var request req
	err2 := json.Unmarshal([]byte(reqBody), &request)
	if err2 != nil {
		fmt.Println(err2)
	}
	// replace resp with req
	response.Id = request.Id
	response.Seatbid[0].Bid[0].Impid = request.Imp[0].Id

	output, err3 := json.Marshal(response)
	if err3 != nil {
		fmt.Println(err3)
	}

	io.WriteString(w, string(output))
}

func main() {
	http.HandleFunc("/dsp1/bid", DspServe)
	http.ListenAndServe(":9001", nil)
}
