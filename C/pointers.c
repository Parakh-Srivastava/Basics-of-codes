#include <stdio.h>
int main()
{
    /*Pointer is a kind of variable which stores the adress of other variables.*/
    int age = 10;
    int *pAge = &age;
    printf("%d", *pAge);
    return 0; 
}