echo Enter the number of terms
#0,1,3,6,10,15,21,28,36
read n
i=0
for((a=0;a<=n;a++))
do
	echo -n `expr $a + $i`,
	i=`expr $i + $a`
done
echo
