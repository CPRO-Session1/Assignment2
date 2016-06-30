//Bettina Benitez
#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	if (x > 0) { //checks if the number chosen by the user is great than 0
		printf("You've entered a positive number!\n");
	}
	if (x < 0) { //checks if the number chosen by the user is less than 0
		printf("You've entered a negative number!\n");
	}
	return 0;
}
