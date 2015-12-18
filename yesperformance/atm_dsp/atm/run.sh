#!/bin/bash

rm -rf atm
go build atm.go
pkill atm
./atm&
