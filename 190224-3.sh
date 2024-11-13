# Write a function using shell to swap two variables by passing args.
echo Enter two numbers
read a
read b
echo a is $a and b is $b
swap()
{
    c=$1
    a=$2
    b=$c
}
swap $a $b
echo a is $a and b is $b