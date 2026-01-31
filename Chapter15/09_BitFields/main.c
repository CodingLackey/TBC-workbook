#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> // CHAR_BIT
#include <stdbool.h>
#include <string.h>

void char_to_binary(unsigned char uc)
{
	const int bits = CHAR_BIT * sizeof(unsigned char);
	for (int i = bits - 1; i >= 0; i--)
	{
		printf("%d", (uc >> i) & 1);
	}
}

void print_binary(char* data, int bytes)//Note: extended for any sizes
{
	for (int i = 0; i < bytes; ++i)
		char_to_binary(data[bytes - 1 - i]);
	printf("\n");
}

int main()
{
	struct {
		bool option1 : 7;
		bool : 0;
		bool option2 : 1;
	} bbf;

	printf("%zu bytes\n", sizeof(bbf));

	struct {
		bool option1 : 1;
		bool option2 : 1;
		unsigned long long option3 : 1; //8바이트
	} bbf1; 

	memset((char*)&bbf1, 0xff, sizeof(bbf1)); // 1111 1111을 채움
	print_binary((char*)&bbf1, sizeof(bbf1));
	bbf1.option1 = 0;
	bbf1.option2 = 0;
	bbf1.option3 = 0;
	print_binary((char*)&bbf1, sizeof(bbf1)); 

	printf("%zu bytes\n", sizeof(bbf1)); //16바이트

	struct {
		unsigned short option1 : 8;
		unsigned short : 0;
		unsigned short option2 : 7;
		unsigned short option3 : 1;
	} usbf;

	printf("%zu bytes\n", sizeof(usbf));


	struct {
		unsigned short option1 : 1;
		unsigned short option2 : 1;
		unsigned short option3 : 1;
	} us1bf;

	printf("%zu bytes\n", sizeof(usbf));

	struct {
		 short option1 : 1;
		 short option2 : 1;
		 short option3 : 1;
	} us2bf;

	printf("short %zu bytes\n", sizeof(us2bf));

	struct {
		unsigned int option1 : 1;
		unsigned int : 0;
		unsigned int option2 : 1;
	} uibf;
	printf("%zu bytes\n", sizeof(uibf));

	return 0;
}

