#!/bin/bash

# Program Number:14
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description: A shell script to print, “Good Morning/Afternoon/Evening based on the current system time

h=$(date +"%H")
if [ $h -gt 6 -a $h -le 12 ]
then
	echo "Good Morning!"
elif [ $h -gt 12 -a $h -le 16 ]
then 
	echo "Good afternoon!"
elif [ $h -gt 16 -a $h -le 20 ]
then
	echo "Good Evening!"
else
	echo "Good Night!"
fi
