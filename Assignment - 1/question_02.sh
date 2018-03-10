#!/bin/bash
filename=$1


#To check, if files exist or not if not then create ... 

if [ -f evenfile ]
then
	echo
else
	`touch evenfile`
fi

if [ -f oddfile ]
then
	echo
else
	`touch oddfile`
fi


#Total Lines in File ...

set `cat $filename|wc -l`
echo "Total Lines are : $1"

 
#Actual Task ..

count=1
while read -r line; 
do
	check1=`expr $count % 2`
	
	if [ $check1 -eq 0 ] 
	then
		`echo "$line" 1>>evenfile`
	else
		`echo "$line" 1>>oddfile`
	fi;
	count=`expr $count + 1`
 done < $filename;
