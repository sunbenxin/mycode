#!/bin/bash



#if [[ $1 == "" ]]; then
#    url="http://v.youku.com/v_show/id_XMTM2MTI3ODU4NA==.html"
#else
#    url=$1
#fi
curl -i -d '{"dspid":"11192","token":"bdd8335ede534d5f950fbb69bb3316dd","material":[{"landingpage":"www.baidu.com","url":"http://v.youku.com/v_show/id_XMTM2MTI3ODU4NA==.html","advertiser":"dsp2_test","startdate":"2015-11-11","enddate":"2020-12-10"}]}' 'http://127.0.0.1:8888/dsp/api/upload'
