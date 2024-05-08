# Write a program to find the factorial of given number.


#!/bin/bash

echo -n "Enter a no. : "
read num1

fact=1

for (( i=1 ; i<=num1 ; i++ ))
do
     fact=$((fact * i))
done

echo "Factorial of $num1 = $fact"
