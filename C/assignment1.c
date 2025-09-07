#include <stdio.h>
int main()
{
	float temp1, temp2, diff = 0.0;
	printf("Please enter the temparatures of parent's and sister's room respectively : ");
	scanf("%f %f", &temp1, &temp2);
	if(temp1 > temp2)
	{
		diff = temp1 - temp2;
		printf("Mark should go to the parent's room cause its %.2fK warmer.", diff);
	}
	else
	{
		diff = temp2 - temp1;
		printf("Mark should go to the sister's room cause its %.2fK warmer.", diff);
	}
	return 0;
}
