#include <stdio.h>

/* need to figure out what each line means */
/* pretty sure the printf will print exactly what is in quotation marks not actually do the operation */

int main()
{
	printf ("Please type any number.\n");
	float num1;
	scanf ("%f", &num1);
	printf ("Please type another number.\n");
	float num2;
	scanf ("%f", &num2);
	printf ("Please choose and type one of the following mathematical operations: + , - , * , / , %\n");
	char operation;
	scanf (" %c", &operation);

	switch (operation)
	{
		case '+': ;
			float sum;
			sum = num1 + num2;
			printf ("%f + %f = %f\n", num1, num2, sum);
			break;
		case '-': ;
			float difference;
			difference = num1 - num2;
			printf ("%f - %f = %f\n", num1, num2, difference);
			break;
		case '*': ;
			float product;
			product = num1 * num2;
			printf ("%f * %f = %f\n", num1, num2, product);
			break;
		case '/': ;
			float quotient;
			quotient = num1 / num2;
			printf ("%f / %f = %f\n", num1, num2, quotient);
			break;
/*		case '%': ;
			float mod;
			mod = num1 % num2;	
			printf ("%f % %f = %f\n", num1, num2, mod);
			break;*/
	}
	
	
	
	
	return 0;
	
/*	char operator
switch (operator)
	case x +y :
		printf ("x + y");
		break;
	case 2: 
		printf ("x - y");
		break;
	case 3:
		printf ("x * y");
		break;
	case 4:
		printf ("x / y");
		break;
	case 5: 
		printf ("x % y");
		break; */
}
