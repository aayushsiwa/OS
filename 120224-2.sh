echo here is a pattern
echo
n=5
m=5
p=0
for((a=m;a>=0;a--))
	do
	#	echo hi
		for((c=0;c<=p;c++))
			do
				echo -n " "
		done
		for((b=n;b>0;b--))
			do

				echo -n "*"
		done
		echo 
		n=`expr $n - 2`
		p=`expr $p + 1`
done
