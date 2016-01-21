#bosun 安装
1. install HBase
 test_01----test_04 : for hadoop data nodes and HBase regions
 high_01:NameNode,SecondearyNameNode monitoring services
 test_05: ambari


2. test proxy install (nat way)
    open-api-02: 
            echo 1 > /proc/sys/net/ipv4/ip_forward  // turn on ip forward
            /sbin/modprobe iptable_nat  // plun in kernel mod
            /sbin/modprobe iptable_conntrack
            /sbin/modprobe iptableconntrack_ftp
    test_01---test_05
    open-api:02 proxy-server
