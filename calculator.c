/* This program creates a calculator
*
*@author Emma Ladouceur
*@version 1
*/

#include <stdio.h>

int main(){

printf("This is a calculator\n Please choose an operation \n");
	printf("+, -, *, /, m: ");
		char op;
		scanf("%c", &op);

	printf("Please choose two numbers \n");
	float x, y, result;

	printf("a: \n");
		scanf("%f", &x);
		
	printf("b: \n");
		scanf("%f", &y);
	
	switch(op){

	case('+'):
		result = x + y;
		break;

	case('-'):
		result = x-y;
		break;

	case('*'):
		result = x*y;
		break;

	case('/'):
		result= x/y;
		break;

	case('m'):
		result=(int)x%(int)y;
		break;

	default:
		printf("You didn't choose a number");
		break;
	}

	printf("%f", result);
	printf("\n");


	return 0;

}

	
