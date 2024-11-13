# WASS to check if input is number or not
echo "->"
read a

echo $a

case $a in
    [0-9])
        echo "Number"
        ;;
    *)
        echo "Not a number"
        ;;
esac