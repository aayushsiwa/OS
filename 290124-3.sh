echo "Enter three numbers"
read a
read b
read c
if [ $a -gt $b ]
then
	if [ $c -gt $a ]
	then 
		echo $c "is the greatest"
	else
		echo $a "is the greatest"
	fi
else
	if [ $c -gt $b ]
	then 
		echo $c "is the greatest"
	else
		echo $b "is the greatest"
	fi
fi
