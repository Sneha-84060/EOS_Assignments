# Write a shell script to determine whether a given number is prime or not



#!/bin/bash

echo -n "Enter a no. : "
read n1

flag=1

for (( i=2 ; i<=n1/2 ; i++ ))
do 
   if [ $(( n1 % i ))  -eq 0 ]
   then
        flag=0
   fi
done

if [ $flag -eq 1 ]
then 
     echo "Prime no."
else
     echo "not prime no."
fi




