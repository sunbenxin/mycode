#!/bin/bash

cd bin
go build ./../src/dsp1.go
go build ./../src/dsp2.go
go build ./../src/dsp3.go
go build ./../src/dsp4.go

pkill dsp

sleep 3
cd ..
./bin/dsp1&
./bin/dsp2&
./bin/dsp3&
./bin/dsp4&

ps -ef  | grep dsp
