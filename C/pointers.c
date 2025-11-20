#include <stdio.h>


/*sabse pehle num1 ke address mein num2 ka value daalenge fir num2 ke adress mein num1 ka address maange*/
void swapnum(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int a = 12, b = 21;
    swapnum(&a,&b);
    printf("%d %d",a,b);
    for(int i = 1; i <= 10; i++)
    {
        if(i == 7)
        {
            goto thala;
        }
        else
            printf("%d\n", i);
    }
    return 0;
    thala:
    {
        printf("thala for a reason \n");
    }
}