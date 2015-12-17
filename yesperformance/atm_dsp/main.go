package main

import (
	"fmt"
)

func main() {
	s := [4]int{0, 1, 2, 3}
	t := s[1:3]
	t = append(t, 4)
	t = append(t, 5)
	fmt.Println(t)
}
