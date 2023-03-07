#! /bin/bash

# Program Number:3
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description: A shell program called new_files that will accept a variable number of command line arguments. The shell program will create a new file associated with each command line argument and echo a message that notifies the user as each file is created

for name in $@
do
	touch $name
	echo "$name is created"
done
