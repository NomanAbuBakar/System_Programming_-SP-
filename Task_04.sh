#!/bin/bash
echo "File Placed in Submitted Lab with Named 'File' So please Enter Filename 'File'"
read -p "Enter Filename you want to read : " fname
terminal=`tty`
if [ -z "$fname" ]
	then
	{
		exit
	}
fi
exec < $fname
count=1
while read line
do 
	echo $line
	if ( test $count = 4 )
		then
		{
			length_String=${#line}
		}
	fi
	count=`expr $count + 1`
done
exec < $terminal
echo "Length of String at 3rd Index : "$length_String