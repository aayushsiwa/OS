echo "Enter two numbers"
read a 
read b
if [ $a -lt $b ]
then
	echo "A<B"
else
	echo "A>B"
fi
