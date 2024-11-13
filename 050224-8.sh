echo Enter a number
read a
arm=0
b=0
c=$a
while [ $a -gt 0 ]
	do
		b=`expr $a % 10`
		a=`expr $a / 10`
		arm=`expr $arm + $b \* $b \* $b`
done
echo $arm
if [ $c -eq $arm ]
then
	echo It is an armstrong number
else
	echo Not an armstrong number
fi
