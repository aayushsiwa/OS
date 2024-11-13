echo Enter a number
read n
for((a=1;a<=10;a++))
do
	echo $n x $a = `expr $n \* $a`
done
