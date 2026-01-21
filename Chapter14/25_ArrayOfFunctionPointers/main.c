#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void update_string(char* str, int(*pf)(int));
void ToUpper(char* str);
void ToLower(char* str);
void Transpose(char* str);//TODO: add a new menu

int main()
{
	char options[] = { 'u', 'l' };
	int n = sizeof(options) / sizeof(char);

	typedef void (*FUNC_TYPE)(char*);
	FUNC_TYPE operations[] = { ToUpper, ToLower };

	printf("Enter a string\n >> ");

	char input[100];

	while (scanf("%[^\n]%*c", input) != 1)
		printf("Please try again1.\n >>");

	while (true)
	{
		printf("Choose an option:\n");
		printf("u) to upper\n");
		printf("l) to lower\n");
		//printf("t) to transpose\n");//TODO: add a new menu

		char c;
		while (scanf("%c%[^\n]%*c", &c) != 1)
			printf("Please try again2.\n >>");

		bool flag = false;

			for (int i = 0; i < n; i++)
			{
				if (options[i] == c) {
					(*(operations[i]))(input);
					flag = true;
					break;
				}							
			}
			if (flag)
				break;
			else
				printf("Please Try again3.\n >>");

	}
	printf("%s", input);
	return 0;
}

void update_string(char* str, int(*pf)(int))
{

}

void ToUpper(char* str)
{
	while (*str != '\0')
	{
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char* str)
{
	while (*str = '\0')
	{
		*str = tolower(*str);
		str++;
	}
}

void Transpose(char* str)
{
	
}