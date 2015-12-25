#!/bin/bash

go build dsp.go

pkill dsp

sleep 3

./dsp -filename=bidRes.json -path=/dsp1 -port=9001&
./dsp -filename=bidRes.json -path=/dsp2 -port=9002&
./dsp -filename=bidRes.json -path=/dsp3 -port=9003&
./dsp -filename=bidRes.json -path=/dsp4 -port=9004&
./dsp -filename=bidRes.json -path=/dsp5 -port=9005&

ps -ef  | grep dsp
