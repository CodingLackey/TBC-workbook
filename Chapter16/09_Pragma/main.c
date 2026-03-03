#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// https://docs.microsoft.com/en-us/cpp/preprocessor/pragma-directives-and-the-pragma-keyword?view=vs-2019

//#pragma pack(1)
//_Pragma("Pack(1)");

//#pragma warning(disable : 4477)
#pragma warning(error : 4477)

struct s {
	int i;
	char ch;
	double d;
};

int main()
{
	struct s A;
	printf("Size of A is: %d", sizeof(A));

	return 0;
}