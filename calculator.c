#include <stdio.h>
#include <stdlib.h>

char ascii[21][31] = {
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
	"b                             b",	
	"b                             b",	
	"b                             b",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
	"b     b     b     b     b     b",
	"b  1  b  2  b  3  b  +  b  =  b",
	"b     b     b     b     b     b",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
	"b     b     b     b     b     b",
	"b  4  b  5  b  6  b  -  b del b",
	"b     b     b     b     b     b",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
	"b     b     b     b     b     b",
	"b  7  b  8  b  9  b  *  b clr b",
	"b     b     b     b     b     b",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
	"b     b     b     b     b     b",
	"b  0  b  .  b  %  b  /  b exitb",
	"b     b     b     b     b     b",
	"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"
};
char value[30] = "                             ";
char buttons[4][5] = {
	{'1', '2', '3', '+', '='},
	{'4', '5', '6', '-', 'd'},
	{'7', '8', '9', '*', 'c'},
	{'0', '.', '%', '/', 'x'}
};
int selectedX = 0;
int selectedY = 0;

void replaceBackground(char from, char to){
	int selectedXLoc = selectedX * 6 + 1;
	int selectedYLoc = selectedY * 4 + 5;
	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 4; y++){
			if(ascii[selectedYLoc + y][selectedXLoc + x] == from)
				ascii[selectedYLoc + y][selectedXLoc + x] = to;
		}
	}
}

void update(){
	ascii[2][0] = 'b';
	ascii[2][30] = 'b';
	for(int i = 0; i < 29; i++) ascii[2][i + 1] = value[i];
	for(int i = 0; i < 21; i++){
		for(int j = 0; j < 31; j++){
			switch(ascii[i][j]){
				case 's': printf("%s", "░"); break;
				case 'b': printf("%s", "█"); break;
				default: printf("%c", ascii[i][j]);
			}
		}
		printf("\n");
	}
}

void changeSelected(int deltaX, int deltaY){
	replaceBackground('s', ' ');
	/* have to do this because modulo operators give negative results in certain cases */
	selectedX = (((selectedX + deltaX) % 5) + 5) % 5;
	selectedY = (((selectedY + deltaY) % 4) + 4) % 4;
	replaceBackground(' ', 's');
}
double mod(double a, double b){
	while(a >= 0){
		 a -=b;
	}
	a += b;
	return b;
}
int printIndex = 0;
void executeButton(){
	
	
	double num1, num2;
	char operation;
	double output;
	switch(buttons[selectedY][selectedX]){
		case 'd': if(printIndex == 0) break; value[--printIndex] = ' '; break;
		case 's': for(int i = 0; i < 30; i++)value[i] = ' '; printIndex = 0; break;
		case '=': 
			
			if(sscanf(value, "%lf%c%lf", &num1, &operation, &num2) < 3){
				printf("Error\n");
				exit(0);
			}
					
			switch(operation){
				case '+': output = num1 + num2; break;
				case '-': output = num1 - num2; break;
				case '*': output = num1 * num2; break;
				case '/': output = num1 / num2; break;
				case '%': output = mod(num1, num2); break;
			}
			printf("%f\n", output);
		case 'x': exit(0);
		default: value[printIndex++] = buttons[selectedY][selectedX];
	}
	update();
	printf("%d", printIndex);
}


int main(){
	replaceBackground(' ', 's');
	update();
	while(1){
		char input = getchar();
		switch(input){
			case 'q': return 0;
			case 'w': changeSelected(0, -1); update(); break;
			case 'a': changeSelected(-1, 0); update(); break;
			case 's': changeSelected(0, 1); update(); break;
			case 'd': changeSelected(1, 0); update(); break;
			case 'e': executeButton(); break;
			
		}
	}
	return 0;
}
