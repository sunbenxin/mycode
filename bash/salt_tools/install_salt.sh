#!/bin/sh

way:1
wget https://repo.saltstack.com/yum/rhel6/SALTSTACK-GPG-KEY.pub
rpm --import SALTSTACK-GPG-KEY.pub
rm -f SALTSTACK-GPG-KEY.pub

echo "####################
# Enable SaltStack's package repository
[saltstack-repo]
name=SaltStack repo for RHEL/CentOS 6
baseurl=https://repo.saltstack.com/yum/rhel6
enabled=1
gpgcheck=1
gpgkey=https://repo.saltstack.com/yum/rhel6/SALTSTACK-GPG-KEY.pub" > /etc/yum.repos.d/saltstack.repo

yum clean expire-cache
yum update
yum install salt-master -y
service salt-master start
chkconfig salt-master on

way:2

curl -L http://bootstrap.saltstack.org | sudo sh -s -- -M -N
