#!/bin/bash

# ---------------------------

Is_Lower()
{
	string=$1
	echo "${string,,}"
}

# ---------------------------

Is_Root()
{
	is_root_user=`whoami`
	set `cat /etc/passwd|grep $is_root_user`
	if [ $3 -eq 1000 ]
	then
	{
		echo "Script is executed by ROOT User."
		return 0
	}
	fi
}

# ---------------------------

Is_User_Exist()
{
	user=$1
	IFS=:
	set `cat /etc/passwd|grep "$user"`
	if [ -z $user ] 
	then
	{
		echo "False"
		return 1
	}
	fi
	if [ $1=$user ]
	then
	{
		echo "True"
		return 0
	}
	fi
}

# ---------------------------

Is_Lower "STRING HAS BEEN CONVERTED!" 
Is_User_Exist "damon"
Is_Root





