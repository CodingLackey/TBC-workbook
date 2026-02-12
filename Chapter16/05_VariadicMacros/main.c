

/*
	Variadic Macros	accept a variable number of arguments.
*/


// ... : ellipses
// __VA_ARGS : one of the predefined macros

/*
printf(...)
stdvar.h Variadic arguments
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PRINT(X, ...) printf("Message " #X ": " __VA_ARGS__)

int main()
{
	double x = 48;
	double y;

	y = sqrt(x);
	PRINT(1, "x= %g\n", x); // printf("Message " "1" ": " "x= %g\n", x)
	printf("Message " "1" ": " "x= %g\n", x);
	PRINT(2, "x = %.2f, y = %.4f\n", x, y);
	printf("Message " "2" ": " "x = %.2f, y = %.4f\n", x, y);
	return 0;
}