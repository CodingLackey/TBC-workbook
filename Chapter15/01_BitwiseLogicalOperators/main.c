#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h>	// exit()

unsigned char to_decimal(const char bi[]);

int main()
{
	printf("Binary String to Decimal\n");

	printf("%d\n", to_decimal("00000110"));
	//printf("%d\n", to_decimal("00010110"));



	// Note: ^ (caret) means power in math.
	// Hint: (int)pow(2, 3) == 8

	//printf("%d\n", to_decimal("10010100"));

	return 0;
}

unsigned char to_decimal(const char bi[])
{
	const size_t length = strlen(bi);
	unsigned char sum = 0;
	for (int i = 0; i < length; ++i)
	{
		if (bi[i] == '1')
		{
			sum += (int)pow(2, length - (i + 1));
		}
		else if (bi[i] != '0') {
			printf("Wrong Character : %c", bi[i]);
			exit(1);
		}
	}
	return sum;
}
