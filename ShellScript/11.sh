#! /bin/bash

# Program Number:11
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description: A script to check how much space is used by each directory of a given file system. The name of the file system has to be provided from the command  line parameter.

ls -lh $1 | grep ^d | awk '{print $9,$5}'

