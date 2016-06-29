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

