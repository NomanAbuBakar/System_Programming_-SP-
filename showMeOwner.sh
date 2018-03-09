#!/bin/bash

showOwners()
{
	username=$1
	for i in `ls`
	do
		set `ls -li $i`
		shift
		if [ -f $i ]
		then
			if [ $username = $3 ]
			then
				echo "Filename | " $9 " | "  $3
			fi
		fi
	done
}
showOwners $1
