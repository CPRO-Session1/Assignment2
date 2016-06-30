/* Christopher Liu - gets a number, checks to see if it's greater or less than zero. If neither, assumes its zero. */
#include <stdio.h>

int main()
{
	float input_number;
	scanf("%f", &input_number);
	if (input_number < 0)
	{
		printf("The number is negative.\n");
	}
	else if (input_number > 0)
	{
		printf("The number is positive.\n");
	}
	else
	{
		printf("The number is zero.\n");
	}
	return 0;
}

