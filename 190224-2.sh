# WASS to create simple calc using switch 1.add 2.sub 3.mul 4.div
echo Enter two numbers
read a
read b


echo "Enter operation(1-add/2-sub/3-mul/4-div)"
read c

case $c in
    1)
        echo `expr $a + $b`
        ;;
    2)
        echo `expr $a - $b`
        ;;
    3)
        echo `expr $a \* $b`
        ;;
    4)
        echo `expr $a / $b`
        ;;
esac