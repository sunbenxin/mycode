package main

import (
	"fmt"
	redis "github.com/garyburd/redigo/redis"
	json "github.com/henrylee2cn/pholcus/common/simplejson"
	url "net/url"
	"strings"
)

func main() {
	c, err := redis.Dial("tcp", "10.100.51.125:6379")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer c.Close()

	n, err := redis.StringMap(c.Do("HGETALL", "yes_dsp"))
	if err != nil {
		fmt.Println(err)
		return
	}

	for _, value := range n {
		js, err := json.NewJson([]byte(value))
		if err != nil {
			fmt.Println(err)
			continue
		}
		bidurl, err := js.Get("bidURL").String()
		if err != nil {
			fmt.Println(err)
			continue
		}
		purl, err := url.Parse(bidurl)
		if err != nil {
			fmt.Println(err)
			continue
		}
		prefix := purl.Host[0]
		if prefix == '1' || prefix == '2' || prefix == '3' || prefix == '4' || prefix == '5' || prefix == '6' || prefix == '7' || prefix == '8' || prefix == '9' || prefix == '0' {
			continue
		}
		hosts := strings.Split(purl.Host, ":")
		/*if len(hosts) > 1 {
			fmt.Println(hosts[1])
		}*/
		fmt.Println(hosts[0])
	}
}
