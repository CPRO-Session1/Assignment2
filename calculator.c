/* Yael Kelmer.
   This code functions as a calculator with the operations of addition, subtraction, multiplication, division, and modulus. */

#include <stdio.h>

int main()
{
	printf ("Please type any integer.\n");
	int num1;
	scanf ("%d", &num1);
	printf ("Please type another integer.\n");
	int num2;
	scanf ("%d", &num2);
	printf ("Please choose and type one of the following mathematical operations: + , - , * , / , %\n");
	char operation;
	scanf (" %c", &operation);

	switch (operation)
	{
		case '+': ;
			int sum;
			sum = num1 + num2;
			printf ("%d + %d = %d\n", num1, num2, sum);
			break;
		case '-': ;
			int difference;
			difference = num1 - num2;
			printf ("%d - %d = %d\n", num1, num2, difference);
			break;
		case '*': ;
			int product;
			product = num1 * num2;
			printf ("%d * %d = %d\n", num1, num2, product);
			break;
		case '/': ;
			int quotient;
			quotient = num1 / num2;
			printf ("%d / %d = %d\n", num1, num2, quotient);
			break;
		case '%': ;
			int mod;
			mod = num1 % num2;	
			printf ("%d %% %d = %d\n", num1, num2, mod);
			break;
	}
	
	
	
	
	return 0;
	
}
