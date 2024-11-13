echo here is a pattern
echo
n=5
m=5
for((a=m;a>=0;a--))
	do
	#	echo hi
		for((b=n;b>=0;b--))
			do
				echo -n "*"
			done
		echo 
		n=`expr $n - 1`
	done
