//Olivier Gabison - A simple calculator.

#import <stdio.h>

int main(){

  printf("Welcome to Olivier's Calculator. To start, please input a number\n");

  float first_Num;
  scanf("\n%f", &first_Num);

  printf("Please input your second number\n");
  float second_Num;
  scanf("\n%f", &second_Num);

  printf("Choose your operator: + (1), - (2), * (3), / (4), %% (5)\n");
  int answer;
  scanf("\n%d", &answer);

  float x;
  int y;
    int new_First_Num;

  switch(answer) {
    case 1:
      x = first_Num + second_Num;
      printf("Your answer is: %f\n", x);
      break;
    case 2:
      x = first_Num - second_Num;
      printf("Your answer is: %f\n", x);
      break;
    case 3:
      x = first_Num * second_Num;
      printf("Your answer is: %f\n", x);
      break;
    case 4:
      x = first_Num / second_Num;
      printf("Your answer is: %f\n", x);
      break;
    case 5:
      new_First_Num = (int)(first_Num + 0.5);
      y = new_First_Num % (int)second_Num;
      printf("Your answer is: %d\n", y);
      break;
    default:
      printf("You did not input a valid number!\n");
  }



  return 0;
}
