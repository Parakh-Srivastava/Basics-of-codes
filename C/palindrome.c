#include <stdio.h>

int reverseNum(int num1)
{
    int reversedNumber = 0,digit;
    do
    {
        digit = num1 % 10;
        reversedNumber = reversedNumber*10 + digit;
        num1 /= 10;
    }
    while(num1 >= 1);
    return reversedNumber;
}

void main()
{
    int num1, num2;
    printf("Enter the number you wanna check : ");
    scanf("%ld", &num1);
    num2 = reverseNum(num1);
    if(num1 == num2)
    {
        printf("The number is palindrome !");
    }
    else
    {
        printf("The number is not a palindrome !");
    }
}