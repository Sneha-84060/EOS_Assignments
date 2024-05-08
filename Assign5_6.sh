#!/bin/bash


echo "Enter a year :"
read year

if [ `expr $year % 100` -eq 0 -a `expr $year % 4` -ne 0 -o `expr $year % 400` -eq 0 ]
then 
      echo "leap year"
else
      echo "not leap year"
fi
