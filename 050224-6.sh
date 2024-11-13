echo Enter a number
read n
fact=$n
while [ $n -gt 1 ]
	do
	d=`expr $n - 1 `
	fact=`expr $fact \* $d`
	n=`expr $n - 1`
done
echo $fact
