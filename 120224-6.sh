echo Enter the number of terms
# 1,4,9,16,25
read n
for((a=1;a<=n;a++))
do
	echo -n `expr $a \* $a`,
done
echo
