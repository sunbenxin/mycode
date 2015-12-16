package main

import (
	"encoding/json"
	"fmt"
)

type O_ext struct {
	Cm  []string
	Pm  []string
	S   string
	Ldp string
}

type O_bid struct {
	Adm   string
	Crid  string
	Id    string
	Impid string
	Nurl  string
	Price float64
	Ext   O_ext
}

type O_seatbid struct {
	Bid []O_bid
}

type rsp struct {
	Bidid   string
	Id      string
	Seatbid []O_seatbid
}

func DspServe() {
	buf := `{"id":"machineId-04ih-01mQF1-0Ai-1mc","seatbid":[ {"bid":[ {"id":"1","impid":"032b382c136752d860679fb98999ad53","price":1000.000000,"nurl":"http://d.dsp.imageter.com/youku_not?tp=8&isp=spcLHKxgd2b38f770&isa=advQ1GoN03c73f1cc_crteETWQ947f42b0e_solU4OlMN3cddaebd&price=${AUCTION_PRICE}&ip:116.227.255.128&cookie:gu=14141318547197bQyouku","adm":"http://v.youku.com/v_show/id_XMTQwNjcwNjgxNg==.html","crid":"crteETWQ947f42b0e","ext":{"ldp":"http://3news.x9377a.com/9709/","s":"2672","pm":[ "http://news3.x9377a.com/9721/","http://d.dsp.imageter.com/youku_not?tp=8&isp=spcLHKxgd2b38f770&isa=advQ1GoN03c73f1cc_crteETWQ947f42b0e_solU4OlMN3cddaebd&price=1000&ip:116.227.255.128&cookie:gu=14141318547197bQyouku"],"cm":[ "http://d.dsp.imageter.com/x?tp=16&isp=spcLHKxgd2b38f770&isa=advQ1GoN03c73f1cc_crteETWQ947f42b0e_solU4OlMN3cddaebd&cookie:gu=14141318547197bQyouku"]}}]}],"bidid":"1"}`

	var m rsp
	err1 := json.Unmarshal([]byte(buf), &m)
	if err1 != nil {
		fmt.Println(err1)
	}

	fmt.Println(m.Bidid)
	m.Bidid = "2"
	fmt.Println(m.Bidid)
}

func main() {
	DspServe()
}
