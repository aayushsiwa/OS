# WASS to add multiply divide and subtract two numbers
# WASS to convert distance into m cm km
# WASS to convert time to hr,min,sec
# WASS to find area of circle rectangle
# WASS to convert temperature from c to f and f to c

echo "Enter two numbers"
read a b
sum=`echo $a + $b | bc`
product=`echo $a \* $b | bc`
division=`echo $a / $b | bc -l`
diff=`echo $a - $b | bc`
echo "Sum is"
echo $sum
echo "Product is"
echo $product
echo "Division is"
echo $division
echo "Difference is"
echo $diff

# 
echo 

echo "Enter distance in mm"
read dist
m=`echo $dist / 1000 | bc -l`
cm=`echo $dist / 10 | bc  -l`
km=`echo $dist / 1000000 | bc -l`
echo "Distance in m" $m
echo "Distance in cm" $cm
echo "Distance in km" $km

# 
echo 

echo "Enter time in hrs mins"
read hrs mins
hr=`echo $hrs + $mins / 60 | bc -l`
min=`expr $hrs \* 60 + $mins`
sec=`expr $min \* 60`
echo $hr
echo $min
echo $sec

#
echo

echo "Enter radius of circle"
read r
area=`echo $r \* $r \* 3.14 | bc`
echo "Area of circle" $area

#
echo

echo "Enter length and breadth of rectangle"
read l b
area=`echo $l \* $b | bc`
echo "Area is" $area

#
echo

echo "Enter temperature in farenheit"
read tf
tf=`echo $tf - 32 | bc -l`
tc=`echo $tf \* 5/9 | bc -l`
echo $tc
