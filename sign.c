#include <stdio.h>
/* Harry Brickner
   Tells someone if a number is positive or negative. */
int main(){
	float input;
	printf("Hello! Gimme a number please!\n");
	scanf("%f", &input);
	/* I cant figure out string concatenation so... here's this instead */
	printf("It's ");
	printf(input > 0? "Positive" : input < 0? "Negative" : "Zero");
	printf("\n");
	return 0;
}
