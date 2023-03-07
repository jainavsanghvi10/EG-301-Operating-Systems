#!/bin/bash

# Program Number:5
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098
# Date:21/1/22
# Description: A script that uses find to look for a file and echo a suitable message if the file is not found.

if [ -e $1 ]
then
	echo "File exists"
else
	echo "File does not exist"
fi
