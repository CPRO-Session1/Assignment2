#include<stdio.h>
int main()
{
	char c;
	int a;
	int b;
	int d;
	printf("Select a mathematical operation\n");
	scanf("%c",&c);
	printf("Select your numbers\n");
	scanf("%d %d",&a,&b);
	switch(c)
	{
		case '+':
			d=a+b;
			break;
		case '-':
			d=a-b;
			break;
		case '*':
			d=a*b;
			break;
		case '/':
			d=a/b;
			break;
		case '%':
			d=a%b;
			break;
		default:
			printf("Invalid option\n");
	}
	printf("the result is %d\n",d);
}
