echo enter a number
read a
b=0
c=0    
d=$a
while [ $a -gt 0 ]
	do
		b=`expr $a % 10`
		c=`expr $c \* 10 + $b`
		a=`expr $a / 10`
done
echo $c
if [ $c -eq $d ]
then
	echo It is a pallindrome
else
	echo It is not a pallindrome
fi
