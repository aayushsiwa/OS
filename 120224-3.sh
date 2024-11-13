echo Fibonnaci series
# 1,1,2,3,5,8,...
echo Enter no of terms
read n
i=1
j=0
k=1
if [ $n -eq 0 -o $n -eq 1 ]
then
	echo $i
else
	echo -n 1,
	for((a=0;a<n-1;a++))
	do
		i=$k
		k=`expr $j + $k`
		echo -n $k,
		j=$i
	done
	echo
fi
