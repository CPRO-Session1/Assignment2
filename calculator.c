/*Rumeet Goradia - Calculator Program*/
#include<stdio.h>
int main()
{
	
	double x, y;
	double answer; 
	printf("Please input two numbers.\n");
	scanf("%lf", &x);
	scanf("%lf", &y);
	printf("Please choose an operation from the following menu:");
	printf("\n+ \[ADDITION]\n- \[SUBTRACTION]\n* \[MULTIPLICATION]\n/ \[DIVISION]\nr \[REMAINDER]\n");
	char operation;
	scanf(" %c", &operation);
	switch (operation)
	{
		case '+':
			answer = x + y;
			printf("%lf + %lf = %lf.\n", x, y, answer);
			break;
		case '-':
			answer = x - y;
			printf("%lf - %lf = %lf.\n", x, y, answer);
			break;
		case '*':
			answer = x * y;
			printf("%lf * %lf = %lf.\n", x, y, answer);
			break;
		case '/':
			answer = x / y;
			printf("%lf / %lf = %lf.\n", x, y, answer);
			break;
		case 'r':
		case 'R':
			answer = (int) x%(int) y;
			printf("%lf %% %lf = %lf.\n", x, y, answer);
			break;
		default:
			printf("That is not a valid option.\n");
	}
	return 0;
}

