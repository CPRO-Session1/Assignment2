#include <stdio.h>

int main()
{
	printf("This program tells you whether a number is positive\n\
	or negative. Please enter a number.\n");
	float x;
	scanf("%f", &x);
	if (x == 0)
		printf("Neither positive nor negative.\n");
	if (x > 0)
		printf("Positive.\n");
	if (x < 0)
		printf("Negative.\n");
return 0;
}
