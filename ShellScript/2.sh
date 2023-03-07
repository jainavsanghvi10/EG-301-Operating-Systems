#! /bin/bash

# Program Number:2
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098 
# Date:21/1/22
# Description:A shell program that checks the number of command line arguments and echoes an error message if there are not exactly three arguments or echoes the arguments themselves if there are three.

if [ "$#" = 3 ]
then
   echo $@
else echo "The number of arguments is not equal to 3.Please Check!"
fi

