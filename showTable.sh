#!/bin/bash
number=$1
option_arg=$2
third_arg=$3

showTable()
{
	#RULE 1
	if [ $# -eq 0 ]
	then
	{
		echo "No Argument had been Passed!"
		exit
	}
	#RULE 2
	elif [ $# -gt 6 ]
	then
	{
		echo "Too Many Arguments had been Passed!"
		exit
	}
	fi
	#RULE 3
	if [ $# -eq 1 ]
	then
	{
		for i in 1 2 3 4 5 6 7 8 9 10;
		do		
		{
			echo "$number * $i = " `expr $number \* $i`
		}
		done
	}
	fi
	
	#RULE 4
	if [ $# -eq 3 -a "$2" = "-s" ]
	then
	{
		for (( i=$third_arg; i<=10; i++ ))
		do
		{
			echo "$number * $i = " `expr $number \* $i`
		}
		done
	}
	fi
	
	#RULE 5
	if [ $# -eq 3 -a "$2" = "-e" ]
	then
	{
		for ((i=1; i<=$third_arg; i++))
		do
		{
			echo "$number * $i = " `expr $number \* $i`
		}
		done
	}	
	fi
	
	#RULE 6
	if [ $# -eq 5 -a "$2" = "-s" -a "$4" = "-e" ]
	then
	{
		for (( i=$3; i<=$5; i++ ))
		do
		{
			echo "$number * $i = " `expr $number \* $i`
		}
		done
		exit
	}
	fi
	
	#RULE 7
	if [ $# -eq 6 -a "$2" = "-s" -a "$4" = "-e" -a "$6" = "-r" ]
	then
	{
		for (( i=$5; i>=$3; i-- ))
		do
		{
			echo "$number * $i = " `expr $number \* $i`
		}
		done
		exit
	}
	fi
}
showTable $1 $2 $3 $4 $5 $6
