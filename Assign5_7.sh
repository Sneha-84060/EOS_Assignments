# Write a Program to find whether a given number is positive or negative


#!/bin/bash


echo -n "Enter a no. : "
read num1

if [ $num1 -ge 0 ]
then 
     echo "$num1 is a positive no."
else
     echo "$num1 is a negative no."
fi
