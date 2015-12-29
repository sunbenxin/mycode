package main

import (
	"encoding/json"
	"fmt"
	"io"
	"log"
	"net/http"
	"os"
)

type atm_rsp struct {
	BAK  []O_atm_rsp_val
	MC   int
	ML   int
	P    int
	PT   int
	PTT  int
	SKIP int
	VAL  []O_atm_rsp_val
}

type O_atm_rsp_val struct {
	AL    int
	AT    int
	BRS   string
	CU    string
	CUF   int
	FU    string
	IE    string
	MN    int
	NB    int
	PC    int
	PD    int
	PR    int
	PRV   int
	PST   int
	RS    string
	RST   string
	SDKID int
	SU    []string
	SUE   []O_atm_rsp_sue
	SUS   []O_atm_rsp_sus
	VID   string
	VQT   string
	ZR    int
}

type O_atm_rsp_sue struct {
	SDK string
	U   string
}
type O_atm_rsp_sus struct {
	SDK string
	U   string
}

var buf = make([]byte, 30000)
var count int

var f *os.File

func RecordLog() {
	f.WriteString("atm\n")
}

func DspServe(w http.ResponseWriter, r *http.Request) {
	var response atm_rsp
	err := json.Unmarshal(buf[:count], &response)
	if err != nil {
		log.Fatal(err)
	}

	//some op on respone

	output, err := json.Marshal(response)
	if err != nil {
		fmt.Println(err)
	}

	RecordLog()
	io.WriteString(w, string(output))
}

func Init() int {
	file, err := os.Open("json/atmResp.json")
	if err != nil {
		log.Fatal(err)
	}

	count, err := file.Read(buf)
	if err != nil {
		log.Fatal(err)
	}
	return count
}

func main() {
	f, _ = os.Open("/opt/data/yes/openresty/logs/atm.log")
	count = Init()
	http.HandleFunc("/adv", DspServe)
	http.ListenAndServe(":9000", nil)
}
