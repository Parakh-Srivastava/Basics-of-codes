#include <stdio.h>
int main()
{
	char shape[20];
	float side, area = 0, length, breadth, radius;
	printf("Enter the shape of which you wanna take out the area : ");
	scanf("%s", &shape);
	if(shape[0] == 's' || shape[0] == 'S')
	{
		printf("\nEnter the length of the side of the square : ");
		scanf("%f", &side);
		area = side*side;
		printf("The area of the Square of %.2f side length is = %.2f.", side, area);
	}
	else if(shape[0] == 'r' || shape[0] == 'R')
	{
		printf("Enter the length and breadth of the rectangle respectively : ");
		scanf("%f %f", &length, &breadth);
		area = length*breadth;
		printf("The area of rectangle is (%.2f * %.2f) = %.2f.", length, breadth, area);
	}
	else if(shape[0] == 'c' || shape[0] == 'C')
	{
		printf("Enter the radius of the circle : ");
		scanf("%f", &radius);
		area = 3.14 * radius * radius;
		printf("The area of circle of radius %.2f = %.2f.", radius, area);
	}
	else
	{
		printf("Only shape we can do right now are Circle, Square and Rectangle!");
	}
	return 0;
}