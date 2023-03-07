#!/bin/bash

# Program Number:7
# Student Name:Jainav Sangvhi ; Roll Number:IMT2020098
# Date:21/1/22
# Description: An interactive file-handling shell program that offers the user choice of copying, removing, rename. Once the user has made a choice, the program ask user for the necessary information, such as the file name, new name.

echo "Select what you want to do:"
echo "1. Copy a file"
echo "2. Remove a file"
echo "3. Rename a file"
read -p "Enter your choice[1-3]: " userChoice
case $userChoice in
	1) 	read -p "Enter the source filename and destination filename: " sFile dFile 
		if [ -e $sFile ]
		then
			if [ -e $dFile ]
			then
				echo "A file with name '$dFile' already exists. Please enter some other name."
			else
				cp $sFile $dFile
				echo "A duplicate file of '$sFile' has been created with name '$dFile'"
			fi
		else 
			echo "$sFile does not exist"
		fi
		;;
	
	2)	read -p "Enter the filename to delete: " sFile
		if [ -e $sFile ]
		then 
			rm $sFile
			echo "'$sFile' has been deleted"
		else 
			echo "'$sFile' does not exist"
		fi
		;;

	3)	read -p "Enter the old filename and the new filename: " sName nName
		if [ -e $sName ]
                then
                        if [ -e $nName ]
                        then
                                echo "A file with name '$nName' already exists. Please enter some other name."
                        else
                                mv $sName $nName
                		echo "'$sName' has been renamed to '$nName'"
                        fi
                else
                        echo "'$sFile' does not exist"
                fi
                ;;
esac

