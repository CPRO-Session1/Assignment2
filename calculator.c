#include<stdio.h>
int main()
{
	char c;
	float a;
	float b;
	float d;
	printf("Select a mathematical operation: \"+,-,*,/,%%\"\n");
	scanf("%c",&c);
	printf("Select your numbers\n");
	scanf("%f %f",&a,&b);
	switch(c)
	{
		case '+':
			d=a+b;
			printf("the Result is %g\n",d);
			break;
		case '-':
			d=a-b;
			printf("the Result is %g\n",d);
			break;	
		case '*':
			d=a*b;	
			printf("the Result is %g\n",d);
			break;
		case '/':
			d=a/b;	
			printf("the Result is %g\n",d);
			break;
		case '%':
			d=(float)((int)a%(int)b);	
			printf("the Result is %.0f\n",d);
			break;
		default:
			printf("Invalid option\n");
	}
	return 0;
}
