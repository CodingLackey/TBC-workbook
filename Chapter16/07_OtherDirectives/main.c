#define _CRT_SECURE_NO_WARNINGS

/*
	#define, #undef, #if, #ifdef, #ifndef, #else, #elif, #endif
*/

/*
	#undef
*/

#define LIMIT 400
//#undef LIMIT // It's ok to undefine previously NOT defined macro.

#undef NON_DEFINED

#include <stdio.h>
#include "Header_B.h"
#include "Header_A.h"

int main()
{
	printf("%d\n", LIMIT);	

	test_function_A();
	test_function_B();
	   
	return 0;
}