/* Yael Kelmer.
   This code allows a user to input a number and the computer will tell the user if the number is positive or negative. */

#include <stdio.h>

int main()
{
	printf ("Type any number and I will tell you if it is negative or positive.\n");
	float number; 	 

	scanf ("%f", &number);
	if (number < 0) {
		printf ("Number is negative\n");
	}
	else { 
		printf ("Number is positive\n");
	}
	return 0;
}

