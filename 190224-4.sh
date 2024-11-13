# Write a function using shell to swap two variables w/o passing args.
echo Enter two numbers
read a
read b
echo a is $a and b is $b
swap()
{
    c=$a
    a=$b
    b=$c
}
swap
echo a is $a and b is $b