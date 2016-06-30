//Olivier Gabison - Check if a number is 0

#include <stdio.h>

int main(){

  float number_To_Check;
  printf("Please input a number to check if it is positive or negative\n");
  scanf("\n%f", &number_To_Check);

  if(number_To_Check > 0)
    printf("The number you inputed is positive\n");

  else if(number_To_Check < 0)
    printf("The number you inputed is negative\n");

  else
    printf("The number you inputed is neither positive nor negative\n");


  return 0;
}
