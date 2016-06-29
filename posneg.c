#include <stdio.h>
/* Program tests if input is positive, negative, or zero
   @author: Aly Milich
 */
  int main(){
	 float x;
         scanf("%f", &x);
	
	if(x > 0)
		printf("x is positive");
	if(x < 0)
		printf("x is negative");
	if(x == 0)
		printf("x is zero");
	
	return 0;
}

