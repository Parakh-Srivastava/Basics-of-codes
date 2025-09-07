#include <stdio.h>

int main()
{
	int l,b, area = 0, perimeter = 0;
	printf("Enter the length and breath of the rectangle : ");
	scanf("%d %d", &l, &b);
	area = l*b;
	perimeter = 2*(l + b);
	printf("\nArea = %d and Perimeter = %d.", area, perimeter);
	return 0;
}
