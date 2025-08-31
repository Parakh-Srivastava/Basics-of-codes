#include <stdio.h>

int main()
{
	int prev_num = 0, next_num = 1,i, counter, temp;
	printf("How many number of the fibonacci series do you want :");
	scanf("%d", &counter);
	printf("\n%d\t", prev_num);
	
	for(i = 1;i < counter; i++)
	{
		printf("%d\t", next_num);
		temp = next_num;
		next_num = prev_num + next_num;
		prev_num = temp;
	}
	return 0;
}
