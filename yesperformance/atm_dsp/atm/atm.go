package main

import (
	"encoding/json"
	"fmt"
	"io"
	"net/http"
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
	buf := `{
    "BAK": [
    ],
    "MC": 2,
    "ML": 36,
    "P": 7,
    "PS": 0,
    "PT": 4,
    "PTT": 0,
    "SKIP": 1,
    "VAL": [
        {
            "AL": 5,
            "AT": 76,
            "BRS": "",
            "CU": "http://dlied5.myapp.com/myapp/1104512706/cf/100001475_cf-v25-v1_0_3_0-28-2015-11-27-22-48_p.apk",
            "CUF": 1,
            "CUM": [
                {
                    "SDK": "1",
                    "U": "http://yktd.m.cn.miaozhen.com/r/k=2015199&p=6yntV&dx=0&ni=__IESID__&mo=0&ns=183.204.243.88&m0=&m0a=__DUID__&m1=__ANDROIDID1__&m1a=efc0e6552bf665fd04d061ce5f5e3ff3&m2=bb18e10341766ca60bb332d662bec3d3&m4=__AAID__&m5=&m6=__MAC1__&m6a=fa0825ec127e6880b7dde41646e74252&nd=__DRA__&np=__POS__&nn=__APP__&o="
                },
                {
                    "SDK": "0",
                    "U": "http://val.atm.youku.com/click?v=313147147&pp=7&ct=u&cs=2146&ca=1004231&ie=673855&uid=435166774&ck=867822020245105&al=5&bl=1&s=&td=&st=1&vl=418.6&ap=!adPosition!&sid=efc44a53bfde9faf42266e65e7aeba94&cr=0&pr=213&oidtype=94836%7C0&dq=&uri=-1&dc=2419510&bak=&pc=!price!&hyid=&ps=0&eff=1&adsid=145015178353043184172&bd=Xiaomi&mdl=HM+NOTE+1S&tag=&ip=183.204.243.88&tp=2&prp=30&mb=1&os=1&dt=1&avs=5.3.1&aw=a&vc=0&idfa=&ouid=&mac=9C:99:A0:FE:1E:A2&im=867822020245105&aid=8e1fd81c8b4e20d1&guid=fb2992d7acb3ec340927fe600af35839"
                }
            ],
            "CUU": "",
            "H": 480,
            "IE": "673855",
            "MN": 1,
            "NB": 0,
            "PC": 0,
            "PD": 1,
            "PR": 3,
            "PRV": 0,
            "PST": 310,
            "RK": 4496,
            "RS": "http://static.atm.youku.com/idea/201512/1211/94836/854480.jpg",
            "RST": "img",
            "SDKID": 0,
            "SHU": [],
            "SU": [],
            "SUE": [
                {
                    "SDK": "0",
                    "U": "http://val.atm.youku.com/over?v=313147147&pp=7&ct=u&cs=2146&ca=1004231&ie=673855&uid=435166774&ck=867822020245105&al=5&bl=1&s=&td=&st=1&vl=418.6&ap=!adPosition!&sid=efc44a53bfde9faf42266e65e7aeba94&cr=0&pr=213&oidtype=94836%7C0&dq=&uri=-1&dc=2419510&bak=&pc=!price!&hyid=&ps=0&eff=1&adsid=145015178353043184172&bd=Xiaomi&mdl=HM+NOTE+1S&tag=&ip=183.204.243.88&tp=2&prp=30&mb=1&os=1&dt=1&avs=5.3.1&aw=a&vc=0&idfa=&ouid=&mac=9C:99:A0:FE:1E:A2&im=867822020245105&aid=8e1fd81c8b4e20d1&guid=fb2992d7acb3ec340927fe600af35839"
                }
            ],
            "SUP": [],
            "SUR": [],
            "SUS": [
                {
                    "SDK": "0",
                    "U": "http://val.atm.youku.com/show?v=313147147&pp=7&ct=u&cs=2146&ca=1004231&ie=673855&uid=435166774&ck=867822020245105&al=5&bl=1&s=&td=&st=1&vl=418.6&ap=!adPosition!&sid=efc44a53bfde9faf42266e65e7aeba94&cr=0&pr=213&oidtype=94836%7C0&dq=&uri=-1&dc=2419510&bak=&pc=!price!&hyid=&ps=0&eff=1&adsid=145015178353043184172&bd=Xiaomi&mdl=HM+NOTE+1S&tag=&ip=183.204.243.88&tp=2&prp=30&mb=1&os=1&dt=1&avs=5.3.1&aw=a&vc=0&idfa=&ouid=&mac=9C:99:A0:FE:1E:A2&im=867822020245105&aid=8e1fd81c8b4e20d1&guid=fb2992d7acb3ec340927fe600af35839"
                },
                {
                    "SDK": "1",
                    "U": "http://yktd.m.cn.miaozhen.com/x/k=2015199&p=6yntV&dx=0&ni=__IESID__&mo=0&ns=183.204.243.88&m0=&m0a=__DUID__&m1=__ANDROIDID1__&m1a=efc0e6552bf665fd04d061ce5f5e3ff3&m2=bb18e10341766ca60bb332d662bec3d3&m4=__AAID__&m5=&m6=__MAC1__&m6a=fa0825ec127e6880b7dde41646e74252&rt=2&nd=__DRA__&np=__POS__&nn=__APP__&o="
                }
            ],
            "VC": "",
            "VN": "",
            "VP": 0,
            "VSC": "",
            "VT": 0,
            "W": 854,
            "ZR": 0
        }
    ],
    "VER": "3.0"
}`
	var response atm_rsp
	err := json.Unmarshal([]byte(buf), &response)
	if err != nil {
		fmt.Println(err)
	}

	output, err1 := json.Marshal(response)
	if err1 != nil {
		fmt.Println(err1)
	}

	io.WriteString(w, string(output))
}

func main() {
	http.HandleFunc("/adv", DspServe)
	http.ListenAndServe(":9000", nil)
}
