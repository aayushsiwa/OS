# Input Variable
read a b
# Print
# echo $a
# Input Array
# read -a arr
# Print Array
# echo ${arr[@]}

# To add int
Val=`expr $a + $b`
Val1=`expr $a + 100`
echo $Val

# To mul int
Val=`expr $a \* $b`
echo $Val


read a b
# To add int/float
Val=`echo $a + $b | bc`
echo $Val
