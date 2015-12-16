#!/bin/bash

rm atm

go build atm.go
#pkill atm
./atm&

curl -i 'http://127.0.0.1:9000/adv'
