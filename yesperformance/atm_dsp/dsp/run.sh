#!/bin/bash

go build dsp1.go
go build dsp2.go
go build dsp3.go
go build dsp4.go

pkill dsp
sleep 3
./dsp1&
./dsp2&
./dsp3&
./dsp4&

ps -ef  | grep dsp
