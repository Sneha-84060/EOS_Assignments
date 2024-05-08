# Write a shell script to display menu like “1. Date, 2. Cal, 3. Ls, 4. Pwd, 5. Exit” and
# execute the commands depending on user choice


#!/bin/bash


echo -e " 1.Date\n 2.Cal\n 3.Ls\n 4.pwd\n 5.Exit"
echo -n "Enter your choice : "
read choice

case $choice in
1)
	echo  "Today's date : "
	date
	;;
2)
	echo  "Current Month calender"
	cal
	;;
3)  echo  "Contents of current directory : "
    ls
	;;
4)  echo  "Current directory path : "
    pwd
	;;
5)  echo "Thank you ... Bye..........."
    exit
	;;
*)
	echo "Invalid choice !!"
	;;
esac


