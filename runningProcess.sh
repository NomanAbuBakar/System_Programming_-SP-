#!/bin/bash
	
if [ $# -eq 0 ]
then
{
	echo "No Argument had been Passed!"
	exit
}
elif [ $# -gt 1 ]
then
{
	echo "Too Many Arguments had been Passed!"
	exit
}
fi

name=$1

set `ps aux| grep $1`	
pid=$2

set `ps -ejf|grep $name`
ppid=$3

echo "PID:" $pid
echo "Name:" $name
echo "PPID:" $ppid
echo "STATE:" Running
