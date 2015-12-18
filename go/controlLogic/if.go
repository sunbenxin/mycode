package main

import (
	"fmt"
)

func main() {
	i := 10
	if i < 5 {
		fmt.Println("i<5")
	} else if i > 5 {
		fmt.Println("i>5")
	} else {
		fmt.Println("i=5")
	}
}
