# WASS to check vowel or consonant using switch case.
echo Enter a character
read a

case $a in
    a|e|i|o|u|A|E|I|O|U)
        echo "Vowel"
        ;;
    *)
        echo "Consonant"
        ;;
esac