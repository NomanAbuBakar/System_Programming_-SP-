#!/bin/bash
echo "------- INFORMATION FOR TA ------"
echo "Two options with script_name are handled by Command Line Arguments(FILE_NAME and USER_NAME)"
echo " --- Use './Task_02_Part_A File1 damon' to run this program in correct way ---"

echo "------- PROGRAM STARTS FROM HERE ------"
fname=$1
myarray1=(`ls -l $fname`)
username=$2

echo "File Detail : "${myarray1[*]}
echo "Given User Name : "$username

permission=${myarray1[0]}
owner=${myarray1[2]}
group=${myarray1[3]}

if( test $owner = $username )
then
	{
		echo "OWNER : "$owner
		echo "GROUP : "$group
		echo "PERMISSIONS : "$permission
		echo "FILENAME : " $fname
		echo "CHEATING : 0"
	}
else
	{
		echo "OWNER : "$owner
		echo "GROUP : "$group
		echo "PERMISSIONS : "$permission
		echo "FILENAME : " $fname
		echo "CHEATING : 1"
	}
fi

set `ls -li $1`

echo ${myarray2[*]}
echo ${myarray3[*]}