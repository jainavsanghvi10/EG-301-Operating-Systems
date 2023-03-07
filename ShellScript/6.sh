#!/bin/bash

# Program Number:6
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098
# Date:21/1/22
# Description:A script which will give 4 choices to the user 1. ls   2. pwd  3. who 4. exit and execute the command as per the users choice

echo "Select which command you want to execute:"
echo "1. ls"
echo "2. pwd"
echo "3. who"
echo "4. exit"
read -p "Enter your choice[1-4]: " userChoice
case $userChoice in
	1) 	echo "You selected option 1"
		ls
		;;
	
	2)	echo "You selected option 2"
		pwd
		;;

	3)	echo "You selected option 3"
		who
		;;
	4) 	echo "You selected option 4"
		exit
		;;
esac

		

