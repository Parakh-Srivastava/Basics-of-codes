#include <stdio.h>

long reverse(long num)
{
    int digit, newnum;
    digit = num % 10;
    newnum = num / 10;
    printf("%ld", digit);
    return digit,newnum;
}

int main()
{
    int dig,newnumber, number;
    printf("Enter the number you want reversed : ");
    scanf("%ld", &number);
    do
    {
        dig,newnumber = reverse(number);
        number = newnumber;
    } 
    while (number >= 1);
   return 0; 
}