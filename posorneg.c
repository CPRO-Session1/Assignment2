/* Rumeet Goradia - Positive or Negative Check */
#include<stdio.h>
int main()
{
	double x;
	printf("Please input a number.\n");
	scanf("%lf", &x);
	
	if (x>0.0)
		printf("%lf is a positive number.\n",x);
	if (x<0.0)
		printf("%lf is a negative number.\n",x);
	if (x==0.0)
		printf("%lf is neither a negative nor a positive number.\n",x);
	return 0;
}
