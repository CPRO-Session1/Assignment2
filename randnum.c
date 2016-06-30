//Clarke Littlejohn
//Guessing Game random number generator

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

	int r;
	int guess;
	int boolean=1;

	srand(time(0));
	r=rand();

	r<1 && r>10 ? boolean=0 : boolean++;

	while(boolean!=1){
		r%=10;
		if(r==0)
			r+=10;
		if(r>=1)
			if(r<=10)
				boolean=1;

	}
	
	printf("\nPick a number, one through ten, to see if it the same as the computer's number.\n");
	scanf("%d",&guess);

	if(guess==r){
		printf("%d was the correct guess.\n",guess);
	} else{
		if(r<guess){
			printf("%d was a higher value than the computer's value. Try again, also the computer might pick a different number.\n",guess);
			main();
		}
		else{
			printf("%d was a lower value than the computer's value. Try again, also the computer might pick a  different number.\n",guess);
			main();
		}
	}
	return 0;

}
