echo "enter a"
read a
b=10
while [ $a -lt $b ]
	do
	echo "$a"
	a=`expr $a + 1`
done
