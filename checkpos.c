#include<stdio.h>
int main()
{
	float x;
	printf("enter a number\n");
	scanf("%f",&x);
	if(x>0)
	{
		printf("The Number is positive\n");
	}
	else
	{
		if(x<0)
			printf("The Number is negative\n");
		else
			printf("The number is zero\n");
	}
	return 0;
}
