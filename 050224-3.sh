a=1
b=10
until [ $a -gt $b ]
	do
		a=`expr $a + 1`
done
echo $a
