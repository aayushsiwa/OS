echo Enter number of terms
read n
for((a=1;a<=n;a++))
do
	echo -n `expr $a \* $a` ,
done
