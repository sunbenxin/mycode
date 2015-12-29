package main

import (
	"fmt"
	"time"
)

func main() {
	t := time.Now()
	nt := t.Format("2003-01-02 15:04:05")
	fmt.Println(nt)
}
