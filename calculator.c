#include <stdio.h>

int main() 
{
	printf("Hello there, welcome to a basic calculator.\
			Your operations available are +, -, *, /, and %\n");
	char o;
	printf("Choose an operation to perform\n");
	scanf("%c", &o);

	float x,y;
	printf("Please enter two numbers to be operated upon\n");
	scanf("%f/n", &x);
	scanf("%f/n", &y);
	switch(o) {
		case '+':
			printf("You chose addition\n");
			printf("%f + %f = %f/n", x, y, x + y);
			break;
		case '-':
			printf("You chose subtraction\n");
			printf("%f - %f = %f\n", x, y, x - y);
			break;
		case '*':
			printf("You chose multiplication\n");
			printf("%f * %f = %f\n", x, y, x * y);
			break;
		case '/': 
			printf("You chose division\n");
			printf("%f / %f = %f\n", x, y, x / y);
			break;
		case '%':
			printf("You chose modulus\n");
			printf("%d %% %d = %d\n",(int) x,(int) y,(int) x % (int) y);
			break;
		default:
			printf("You failed to pick a valid operation.");
	}
	return 0;
}
