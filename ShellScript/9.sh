#!/bin/bash
# Program Number:9
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description:A shell script that accepts a file name starting and ending line numbers as arguments and displays all the lines between the given line numbers

sed -n $2,$3\p $1

