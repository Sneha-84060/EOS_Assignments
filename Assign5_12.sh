# Write a shell script to accept a filename as argument and displays the last modification
# time if the file exists and a suitable message if it doesn’t exist.


#!/bin/bash


echo -n "Enter file path : "
read file

if [ -e $file ]
then
      echo "last modification time of $file : "
	  stat -c %y $file
else
      echo "File does not exist"
fi
