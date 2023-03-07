#!/bin/sh

# Program Number:12
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description:A script in /root/myscript.sh according to the following criteria:(a) If you search for the IIT the output is NIT (b)If you search for NIT the output is IIT (c)If you search any other keyword or not give any input, the output is STDERR should be displayed.

read -p "Enter the file name to be searched:" input
echo "Output: "
if [ $input == "IIT" ]
then
	echo "NIT"
elif [ $input == "NIT" ]
then
	echo "IIT"
else
	echo "STDERR"
fi
