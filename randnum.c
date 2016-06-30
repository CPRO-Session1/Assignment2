//Olivier Gabison - Random number generator that checks whether you guessed correctly.

#import <stdio.h>
#import <stdlib.h>
#import <time.h>

int main(){

  printf("Please guess a number between 1 and 10\n");
  int guess;
  scanf("\n%d", &guess);

  srand(time(0));
  int r = 1 + rand() % 10;

  if(guess > r)
    printf("\nToo high\n");
  else if(guess < r)
    printf("\nToo Low\n");
  else
    printf("\nCorrect!\n");


  return 0;
}
