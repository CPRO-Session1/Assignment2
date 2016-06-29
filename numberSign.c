#include <stdio.h>

int main()
{
	float x;
	printf("Write any number that you wish\n");
	scanf("%f",&x);
	if (x>0)
	{
		printf("The number is positive\n");
	}
	else if (x< 0)
	{
		printf("The number is negative\n");
	}
	else
	{
		printf("The number is neither negative nor positive\n");
	}			
	return 0;
}
