#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> // CHAR_BIT
#include <stdbool.h>
#include <string.h>

void char_to_binary(unsigned char uc)
{
	const int bits = CHAR_BIT * sizeof(unsigned char);
	for (int i = bits - 1; i >= 0; i--) {
		printf("%d", (uc >> i) & 1);
	}
}
// 0001 0000
//

void print_binary(char* data, int bytes)//Note: extended for any sizes
{
	for (int i = 0; i < bytes; ++i)
		char_to_binary(data[bytes -1 -i]);
	printf("\n");
}

int main()
{
	char_to_binary(16);

	struct items {
		bool has_sword : 1;
		bool has_sheild : 1;
		bool has_potion : 1;
		bool has_guntlet : 1;
		bool has_hammer : 1;
		bool has_key : 1;
		bool has_ring : 1;
		bool has_amulet : 1;
	} items_flag; // 총 1바이트

	items_flag.has_sword = true; // C99 이후부터.
	items_flag.has_sheild = 1;
	items_flag.has_potion = 0;
	items_flag.has_guntlet = 1;
	items_flag.has_hammer = 0;
	items_flag.has_key = 0;
	items_flag.has_ring = 0;
	items_flag.has_amulet = 1;

	printf("Size = %zd\n", sizeof(items_flag));

	print_binary((char*)&items_flag, sizeof(items_flag));

	if (items_flag.has_key == 1) // if(flags & MASK_KEAY) == MASK_KEY)
		printf(">> You can enter. \n");

	union {
		struct items bf;
		unsigned char uc;
	} uni_flag;

	uni_flag.uc = 0;
	print_binary((char*)&uni_flag, sizeof(uni_flag));
	uni_flag.bf.has_amulet = true;
	uni_flag.uc |= (1 << 4);
	print_binary((char*)&uni_flag, sizeof(uni_flag));

	// KNK DOSexmaple

	struct file_time
	{
		unsigned int seconds : 5; // 실제 초 / 2 홀수 2초 단위로만 셈
		unsigned int minutes : 6;
		unsigned int hours : 5;
	};

	struct file_date
	{
		unsigned int day : 5;
		unsigned int month : 6;
		unsigned int year : 7; // 2^7 = 128, 1980 ~ .. 
	}fd;

	/* 1988 12 28 */
	fd.day = 28;
	fd.month = 12;
	fd.year = 8;

	printf("Day %u, Month %u Year %u\n", fd.day, fd.month, fd.year);
	//scanf("%d", &fd.day); wrong

	fd.day = 32;
	printf("Day %u, Month %u Year %u\n", fd.day, fd.month, fd.year);


	return 0;
}
