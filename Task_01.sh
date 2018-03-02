#!/bin/sh
read -p "Enter First Number : " number1
read -p "Enter First Number : " number2

if ( test $number2 -gt 0 )
then
{
    echo "Addition : " `expr $number1 + $number2`
    echo "Subtraction : " `expr $number1 - $number2`
    echo "Multiplication : "`expr $number1 \* $number2`
    echo "Division : "`expr $number1 / $number2`
    echo "Mod : "`expr $number1 % $number2`
}

else
{
    echo "Second Argument is Zero."
}
fi
