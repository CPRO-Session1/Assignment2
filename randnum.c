//Anya Lauria
//Random number generator 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

srand(time(0));
int r = (rand() % 10) + 1  ;

int y;
printf("You may guess what number was generated! \n");
scanf("%d", &y);

 {
	 if (y == r) 
		 printf("Spot on! The number was %d\n", r);
	  else if (y > r) 
		  printf("You guessed too high. The number was %d\n", r);
	   else 
		   printf("You guessed too low. The number was %d\n", r);
 }

}
