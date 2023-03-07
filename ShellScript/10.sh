#!/bin/bash

# Program Number:10
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description: A script to backup a given directory to a given file name  in your home directory. Both, the directory name and the backup file has to be passed as  command line input.

if [ "$#" -l 2 ]
then
	echo "ERROR - Please enter the correct Aruguments!"
elif [ "$#" -gt 2 ]
then
	echo "ERROR - Extra unknown aruguments found!"
else

	if [ -e $1 ]
	then
		if [ -e $2 ]
		then
			echo "The Directory '$2' already exists. Please enter some other name"
		else
			cp -R $1 $2
			mv $2 ~/
			echo "The Directory '$1' has been successfully backed up"
		fi
	else
		echo "ERROR - Directory '$1' does not exist"
	fi
fi
