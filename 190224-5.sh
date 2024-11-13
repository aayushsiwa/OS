# WASS to check if the input is "aabbb..." string sequence, 
# then program will accept; otherwise not accept using case.

echo Enter a string
read a
# b=${a:0:5}  # ${string:pos:length} string to print till length after pos
case $a in
    aabbb[a-z]*)
        echo ok
        ;;
    *)
        echo not valid
        ;;
esac