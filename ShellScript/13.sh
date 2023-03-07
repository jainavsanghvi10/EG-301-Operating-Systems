#!/bin/bash

# Program Number:13
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description:Write a shell script to print a multiplication table

read -p "Enter a Number: " n

i=1
while [ $i -le 10 ]
do
          echo " $n x $i = $(( n * i ))"
          i=$(( i + 1 ))
done
