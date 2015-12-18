#!/bin/bash

rm -rf bin/atm
cd bin
go build ./../src/atm.go
cd ..
pkill atm
./bin/atm&
