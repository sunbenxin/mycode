#!/usr/bin/expect

set timeout 30

spawn ssh -l sunbenxin 10.103.11.151

expect {
    "Password:" { send "Yk17090320107\r"; exp_continue}
    "Select server:"  {send "3\r"}
}

interact
