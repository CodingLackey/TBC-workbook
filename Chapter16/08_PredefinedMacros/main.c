#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

#include "DifferentFile.h"
void different_function();

int main()
{
	struct tm* newTime;
	time_t szClock;

	time(&szClock);
	newTime = localtime(&szClock);

	printf("__FILE__ : %s\n", __FILE__);
	printf("__DATE__ : %s\n", __DATE__);
	printf("__TIME__ : %s\n", __TIME__);
	printf("__LINE__ : %d\n", __LINE__);
	printf("__func__ : %s\n", __func__);
	printf("Runtime asctime : %s\n", asctime(newTime));

	different_func_in_different_file();
	different_function();


#line 7
	printf("__LINE__ after #line %d\n", __LINE__);
#line 1 "hello.txt"
	printf("__LINE__ after #line %d\n", __LINE__);
	printf("__FILE__ : %s\n", __FILE__);

//#if __LINE__ != 33
//#error Not line 33
//#endif 

#if defined(_WIN64) != 1
#error Not WIN64 platform
#endif

	return 0;
}

void different_function()
{
	printf("This function is %s\n", __func__);
	printf("This is line %d\n", __LINE__);
}
