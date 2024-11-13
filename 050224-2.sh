echo enter a
read a
for((a=a;a<=10;a++))
	do
		echo `expr $a + 1`
done
