#include <stdio.h>

double mod(double a, double b){
	while(a >= 0){
		 a -=b;
	}
	a += b;
	return b;
}
int main(){
	double num1;
	double num2;
	printf("Hello, what's your first number?\n");
	scanf("%lf", &num1);
	printf("And what's your second number?\n");
	scanf("%lf",  &num2);
	printf("Which of the following operations should I do? + - * / %%\n");
	char operation;
	scanf("\n%c", &operation);

	double output;
	switch(operation){
		case '+': output = num1 + num2; break;
		case '-': output = num1 - num2; break;
		case '*': output = num1 * num2; break;
		case '/': output = num1 / num2; break;
		case '%': output = mod(num1, num2); break;
	}
	printf("Answer is %lf\n", output);
	return 0;
}
