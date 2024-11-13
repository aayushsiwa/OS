#leap year or not
echo "Enter an year"
read a
if [ `expr $a % 4` -eq 0 ]
then
	echo "Leap"
elif [ `expr $leap % 100` -eq 0 ]
then
	echo "Not Leap"
elif [ `expr $leap % 4` -eq 0 ]
	then
	echo "Leap"
else
	echo "Not Leap"
fi
