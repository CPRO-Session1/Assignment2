#include <stdio.h>

int main(){
	float x;
	float y;
	float ans;
	char op;
	printf("Enter first number:\n");
	scanf("%f", &x);
	printf("Enter second number:\n");
	scanf("%f", &y);
	printf("Would you like to +, -, *, /, or %%?\n");
	scanf(" %c", &op);

	switch(op)
	{
		case ('+'):
			ans = x + y;
			printf("Your answer is ");
			printf("%.2f\n", ans);
			break;
		case ('-'):
			ans = x - y;
			printf("Your answer is ");
			printf("%.2f\n", ans);
			break;
		case ('*'):
			ans = x * y;
			printf("Your answer is ");
			printf("%.2f\n", ans);
			break;
		case ('/'):
			ans = x / y;
			printf("Your answer is ");
			printf("%.2f\n", ans);
			break;
		case ('%'):
			ans = (int) (x+0.5) % (int) (y+0.5);
			printf("Your answer is ");
			printf("%.0f\n", ans);
	}
	return 0;
}
