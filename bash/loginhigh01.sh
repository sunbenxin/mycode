#!/usr/bin/expect

set timeout 30

spawn ssh -l sunbenxin 10.103.11.151

expect {
    "Password:" { send "www.jb51.net\r"; exp_continue}
    "Select server:"  {send "3\r"}
}

interact
