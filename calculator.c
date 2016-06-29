#include <stdio.h>

int main()
{
	printf("Choose one of the following operations: +, -, *, /, or the percent key\n");
	char x;
	scanf("%c",&x);
	printf("Enter two numbers below\n");
	float y,z;
	scanf("%f",&y);
	scanf("%f",&z);
	float answer;
	switch (x){
		case '+':
			answer = y + z;
			break;
		case '-':
			answer = y - z;
			break;
		case '*':
			answer = y * z;
			break;
		case '/':
			answer = y / z;
			break;
		case '%':
			answer =(int)y %(int) z;
			break;
	}
	printf( "%f", answer);
	return 0;
}
