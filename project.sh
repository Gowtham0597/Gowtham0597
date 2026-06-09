#!/bin/bash
echo " ============================="
echo " Linux system monitoring "
echo "============================ "

echo""
echo " Hostname"
hostname

echo""

echo "IP Address"
hostname -I

echo""
echo" System Time"
uptime -p

echo""
echo"CPU Information"
lscpu | grep "Model  name"

echo""
echo "Memory Usage"
free -h

echo""
echo " Disk Usage"
df -h

echo""
echo " Logged User"
who

echo""
echo " Top 5 CPU Consuming Process"
ps aux --sort=-%cpu | head -6

echo""
echo "Top 5 Memory Consuming process"
ps aux --sort=-%mem | head -6

echo"===================================="
echo" Monitoring Complete"
echo "==================================="
