#include <stdio.h>
#include <stdlib.h>
void main()
{
	int ans, guess, counter, min, max;
	int win_condition = 1;
	min = 1;
	max = 100;
	ans = (rand() % (max - min + 1) + min);
	printf("\t\t\tWELCOME TO NUMBER GUESS !!\n");
	printf("Guess the correct number in the range (%d , %d) within 10 guesses.\n", min, max);
	for(counter = 1; counter <= 10; counter ++)
	{
		printf("Guess no %d : ", counter);
		scanf("%d", &guess);
		if(guess == ans)
		{
			printf("Touch some grass nigga !!");
			win_condition = 0;
			break;
		}
		else if(guess < ans)
		{	
			printf("The number you guessed is smaller!\n");
		}
		else if(guess > ans)
		{
			printf("The number you guessed is higher!\n");
		}
		else
		{
			printf("Wrong output !");
			break;
		}
	}
	if(win_condition == 1)
	{
		printf("You aint man enough!!");
	}
}
