#!/bin/bash
# Program Number:8
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description: Shell script that takes a login name as command – line argument and reports when that person logged in.

w -h | grep $1 | awk '{print $4}'

