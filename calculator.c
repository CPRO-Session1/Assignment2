//Bettina Benitez
#include <stdio.h>

int main () {
	int x; 
	int y;
	int r; //results
	char oper;
	printf("Enter your first number: \n");
	scanf("%d", &x); 
	printf("Choose your operation (+ - * /): \n");
	scanf(" %c", &oper);
	printf("Enter your second number: \n");
	scanf("%d", &y);
	switch (oper) { //checks which operation was chosen then executes it
		case '+' :
			r = x + y;
			printf("The answer is: %d\n", r);
			break;
		case '-' :
			r = x - y;
			printf("The answer is: %d\n", r);
			break;
		case '*' :
			r = x * y;
			printf("The answer is: %d\n",r);
			break;
		case '/' :
			r = x / y;
			printf("The answer is: %d\n", r);
			break;
		default :
			printf("Error! Cannot compute!");
	}

	return 0;
}

