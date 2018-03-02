#!/bin/bash

#Command Line Arguments Handling ...
fname1=$1
username1=$2

fname2=$3
username2=$4
#----------------------------------

set `ls -li $fname1`
echo ${myarray1[*]}
permissions1=$2
owner1=$4
group1=$5

if( test $owner1 = $username1 )
then
	{
		echo "USERNAME : $username1"
		echo "OWNER : " $owner1
		echo "GROUP : " $group1
		echo "PERMISSIONS : " $permissions1
		echo "FILENAME : " $fname1
		echo "CHEATING : 0"
	}
else
	{
		echo "USERNAME : $username1"
		echo "OWNER : " $owner1
		echo "GROUP : " $group1
		echo "PERMISSIONS : " $permissions1
		echo "FILENAME : " $fname1
		echo "CHEATING : 1"
	}
fi

set `ls -li $fname2`

permissions2=$2
owner2=$4
group2=$5
 
if( test $owner2 = $username2 )
then
	{
		echo "USERNAME : $username2"
		echo "OWNER : " $owner2
		echo "GROUP : " $group2
		echo "PERMISSIONS : " $permissions2
		echo "FILENAME : " $fname2
		echo "CHEATING : 0"
	}
else
	{
		echo "USERNAME : $username2"
		echo "OWNER : " $owner2
		echo "GROUP : " $group2
		echo "PERMISSIONS : " $permissions2
		echo "FILENAME : " $fname2
		echo "CHEATING : 1"
	}
fi