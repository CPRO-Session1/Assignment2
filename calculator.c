#include <stdio.h>

/*Calculator with drop down menu to compute 2 numbers.
  @author: Aly Milich
  */

int main(){

	char op;
	float x, y, result;

	printf("Please select an operation: +, -, *, /, m (for mod)");

	scanf("%c", &op);

	printf("Please enter the first number.");
	scanf("%f", &x);

	printf("Please enter the second number.");
	scanf("%f", &y);

	switch(op){
		case('+'):
			result = x + y;
			break;
		case('-'):
			result = x -y;
			break;
		case('*'):
			result = x*y;
			break;
		case('/'):
			result = x/y;
			break;
		case('m'):
			result = (int)x % (int)y;
			break;
		default:
			printf("You didn't pick an operation.");
			break;
	}

	printf("%f", result);


	return 0;

}
