//Anya Lauria
//This program performs five calculator functions for floating values 
//-----------------------------------------------------------
#include <stdio.h>

int main() 

{

printf("Please enter two numbers\n"); 
float x,y;
scanf("%f", &x);
scanf("%f", &y);



printf("Options: 1 to add, 2 to subtract, 3 to multiply, 4 to divide, 5 for mod\n");
int z;
scanf("%d", &z);
switch (z)
  	{  
	  case 1:
		  printf("Answer:%f\n", x+y);
	  	  break;
	  case 2:
		  printf("Answer:%f\n", x-y);	  
	          break;
	  case 3: 
		  printf("Answer:%f\n", x*y);
	          break;
	  case 4: 
		  printf("Answer:%f\n", x/y);
                  break;
	  case 5:
		  printf("Answer:%d\n",(int) x%(int)y);
	          break;
	}
return 0;
}
