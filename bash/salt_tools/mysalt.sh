#!/bin/bash

usage() {
    echo "Usage:$0 banner|video|monitor cmd"
}

if [ $# -ne 2 ]
then
   usage
   exit 1
fi

banners=`cat bannerservers`
videos=`cat videoservers`
monitors=`cat monitorservers`

server_type=$1
cmd=$2

for i in $banners
do
    ssh $i $cmd
done
