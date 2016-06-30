//Write a calculator program calculator.c that prompts the user with a menu for operations (+, -, *, /, %), takes in 2 numbers, and performs the selected operation. The menu selection should be interpreted using a switch statement. You may assume the user will enter any 2 valid numbers.
#include<stdio.h>
int main() {
	printf("Choose an operation: [+,-,%,*,/] \n ");
	char o;
	scanf("%c" , &o);
	float  x,y;
	printf("Type two numbers  \n");
	scanf("%f \n ",&x);
	scanf("%f",&y);
	float z=0.0;
	switch (o){
		case '+':
			z = x+y;
			break;
		case '-':
			z = x-y;
			break;
		case '*':
			z = x*y;
			break;
		case '/':
			z=x/y;
			break;
			//		case '%':
			//			z=x%y;
			//			break;
			// does not work because x and y are floats
		default:
			printf("Invalid Responses.");
	}
	printf("%f", z);
}
