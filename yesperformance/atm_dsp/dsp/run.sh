#!/bin/bash

go build dsp.go

pkill dsp

sleep 3

./dsp -filename=bidRes.json -path=/bid -port=9001&
./dsp -filename=bidRes.json -path=/bid -port=9002&
./dsp -filename=bidRes.json -path=/bid -port=9003&
./dsp -filename=bidRes.json -path=/bid -port=9004&
./dsp -filename=bidRes.json -path=/bid -port=9005&

./dsp -filename=bidRes.json -path=/bid -port=10001&
./dsp -filename=bidRes.json -path=/bid -port=10002&
./dsp -filename=bidRes.json -path=/bid -port=10003&
./dsp -filename=bidRes.json -path=/bid -port=10004&
./dsp -filename=bidRes.json -path=/bid -port=10005&
./dsp -filename=bidRes.json -path=/bid -port=10006&
./dsp -filename=bidRes.json -path=/bid -port=10007&
./dsp -filename=bidRes.json -path=/bid -port=10008&
./dsp -filename=bidRes.json -path=/bid -port=10009&

ps -ef  | grep dsp
