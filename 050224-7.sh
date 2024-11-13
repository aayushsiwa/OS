echo Enter a
read a
sum=0
while [ $a -gt 0 ]
	do
		b=`expr $a % 10`
		a=`expr $a / 10`
		sum=`expr $sum + $b`
done
echo $sum
