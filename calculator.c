/* Christopher Liu - First take input of chosen operation, then take inputs of numbers. Then operate on them. Mod converts to ints first. */
int main()
{
	int oper_choice;
	printf("Pick an operation: \n 1.+   2.-   3.*   4./   5.%%\n");
	scanf("%d", &oper_choice);

	float first_num, second_num;
	printf("What is your first number?: ");
	scanf("%f", &first_num);

	printf("What is your second number?: ");
	scanf("%f", &second_num);

	float answer;
	{
		switch(oper_choice)
		case 1:
			answer = first_num + second_num;
			break;
			
		case 2:
			answer = first_num - second_num;
			break;

		case 3:
			answer = first_num * second_num;
			break;
			
		case 4:
			answer = first_num / second_num;
			break;
			
		case 5:
			if (!(first_num == (int) first_num && second_num == (int) second_num))
			printf("\nCan't mod with a float. Converting to integers...\n");
			answer = (int) first_num % (int) second_num;
			break;

		default:
	}
	printf("\n%f\n\n", answer);
	return 0;
}
