#!/bin/sh

########################
#salt migrate script
#######################

usage() {
    echo "Usage:$0 master_ip"
}

#
if [ $# -ne 1 ]
then
    usage
    exit 1
else
    master_ip=$1
fi
old_master_ip=""

#install salt-master in new master
    #curl -L http://bootstrap.saltstack.org | sudo sh -s -- -M -N

#salt files (/srv/salt/*) migrate to a new master server
scp -P 22022 salt.tar root@$master_ip:/tmp
ssh $master_ip "tar xvf /tmp/salt.tar -C /srv/salt/"

#update minions with a new master ip
ssh $master_ip 'sed -i "s/$old_master_ip/$master_ip/" /etc/salt/minion'

#rm old master pub keys in minions
ssh $master_ip "rm -rf /etc/salt/pki/minion/minion_master.pub"

#minion restart
ssh $master_ip "service salt-minion restart"

