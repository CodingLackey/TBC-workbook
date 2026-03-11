#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long get_long(void);

int main()
{
	long number;
	while (1)
	{
		printf("Please input a integer between 1 and 100\n");
		number = get_long();
		if (number > 1 && number < 100)
		{
			printf("Do Somthing\n");
			break;
		}
		else
			printf("Wrong input.  Try Again \n");
	}

	printf("You input %d is between 1 and 100.\n", number);
	return 0;
}

long get_long(void)
{
	printf("Please input an integer and press enter. \n");

	long input;
	char c;

	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");
		while ((c = getchar()) != '\n')
			putchar(c);
		printf(" - is not an integer. Please try again\n");
	}
	return input;
}