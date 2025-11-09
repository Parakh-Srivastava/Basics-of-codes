#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numOfEle;
    printf("how many users you need : ");
    scanf("%d", &numOfEle);

    int *a = malloc(numOfEle*sizeof(int)); //this allots [numOfEle*sizeof(int)] to the adress of a 
    printf("Enter %d numbers :\n", numOfEle);
    for(int i = 0; i < numOfEle; i++)
    {
        scanf("%d", &a[i]); //Now a can be used like an array 
    }

    printf("The numbers are :");
    for(int i = 0; i < numOfEle; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}