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

func DspServe(w http.ResponseWriter, r *http.Request) {
	var response atm_rsp
	err1 := json.Unmarshal(buf[:count], &response)
	if err1 != nil {
		log.Fatal(err1)
	}

	output, err1 := json.Marshal(response)
	if err1 != nil {
		fmt.Println(err1)
	}

	io.WriteString(w, string(output))
}

func readFile(fileName string) (buf []byte, count int) {
	file, err := os.Open(fileName)
	if err != nil {
		log.Fatal(err)
	}

	count, err := file.Read(buf)
	if err != nil {
		log.Fatal(err)
	}

	return buf, count
}

func main() {
	readFile("atmResp.json")
	buf, count := readFile("atmRest.json")
	http.HandleFunc("/adv", DspServe)
	http.ListenAndServe(":9000", nil)
}
