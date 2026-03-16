#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//char get_choice(void);
//char get_first_char(void);
//int  get_integer(void);
void count(int integer);

int main()
{
	char ch;
	int integer = 0;

	while (1)
	{
		printf("Enter the letter of your choice:\n");
		printf("a. avengers\tb. beep\nc. count\tq. quit\n");
		scanf("%c", &ch);
		switch (ch)
		{
		case 'a':
			printf("Avengers assemble!\n");
			break;
		case 'b':
			printf("\a");
			break;
		case 'c':
			scanf("%d", &integer);
			count(integer);
			break;
		case 'q':
			exit(0);
		}
		while ((ch = getchar()) != '\n')
			putchar(ch);
	}
	return 0;
}

void count(int integer)
{
	for (int i = 1; i < integer + 1; i++)
	{
		printf("%d\n", i);
	}
}
//
//char get_choice(void)
//{
//	int user_input;
//	
//
//
//
//
//	return user_input;
//}
//
//char get_first_char(void)
//{
//	int ch;
//
//
//
//
//
//	return ch;
//}
//
//int get_integer(void)
//{
//	int input;
//
//
//
//	return input;
//}