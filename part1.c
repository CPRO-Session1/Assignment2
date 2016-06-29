//Olivier Gabison - Check if a number is 0

#include <stdio.h>

int main(){

  int number_To_Check;
  printf("Please input a whole number to check if it is positive or negative\n");
  scanf("\n%d", &number_To_Check);

  if(number_To_Check > 0)
    printf("The number you inputed is positive\n");

  else if(number_To_Check < 0)
    printf("The number you inputed is negative\n");

  else
    printf("The number you inputed is neither positive nor negative\n");


  return 0;
}
