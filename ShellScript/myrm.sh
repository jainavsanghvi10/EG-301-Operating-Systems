#! /bin/bash

# Program Number:4
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description:A shell program called myrm that will move all of the files you delete into the .recyclebin directory, your wastebasket

for i in $@
do
	mv $i ~/.recyclebin
	echo "$i has been moved to the recycle bin"
done

