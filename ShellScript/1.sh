#! /bin/bash

# Program Number:1
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description:shell script to count the number of block device files in /dev directory

#go to the /dev directory
cd /dev
#print the number of block devices files in the directory
ls -l | grep ^b | wc -l 
