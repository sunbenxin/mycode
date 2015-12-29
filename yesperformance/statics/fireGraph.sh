#!/bin/bash

pid=$1
num=$2
dir=`pwd`

cd /opt/adx/source/openresty
$dir/nginx-systemtap-toolkit/ngx-sample-lua-bt -p $pid --luajit20 -t $num > tmp.bt
$dir/nginx-systemtap-toolkit/fix-lua-bt tmp.bt > $pid.bt && rm -f tmp.bt

$dir/FlameGraph/stackcollapse-stap.pl $pid.bt > $pid.cbt && rm -f $pid.bt
$dir/FlameGraph/flamegraph.pl $pid.cbt > $pid.svg && rm -f $pid.cbt
mv $pid.svg /var/ftp/pub/svg/

