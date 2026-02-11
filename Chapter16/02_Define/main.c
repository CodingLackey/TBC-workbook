#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Preprocessor directives begins with # symbol at the beginning of a line.
*/

/*
	Macro
	- An instruction that represents a sequence of instructions in abbreviated form.
*/

/*
#define			SAY_HELLO		printf("Hello, World!");

Preprocessor	Macro (name)	body (or replacement list)
directive

Macro expansion
*/


/*
	Object-like macros vs Function-like macros

#define ONE 1
#define SQUARE(X) X*X
*/


/* Symbolic, or manifest, constants*/
#define PI 3.141592 
#define GRAVITY 9.8
#define THREE 3
#define MESSAGE "The greatest glory in liveing lies not in never falling, \
but in rising every time we fall."

#define NINE THREE * THREE
#define FORMAT "Number is %d. \n"

#define MY_CH 'Z'
#define MY_ST "Z" // Z\0

#define LIMIT 2
const int LIM = 50;
static int arr1[LIMIT];
//static int arr2[LIM]; // clang, c++
const int LIM2 = 2 * LIMIT;
//const int LIM33 = 2 * LIM; //clang,  c++

/*
	Tokens

#define SIX 3*2
#define SIX 3 * 2
#define SIX 3		*		2
*/

/* Redefining Constants */
#define SIX 2*3
#define SIX 2*3 
#undef SIX
#define SIX 2 * 3 // Tokens 단위로 다르면 Warning


#define SAY_HELLO printf("Hello, World!");

int main()
{
	int n = THREE;

	SAY_HELLO;
	n = NINE;

	printf(FORMAT, n);
	printf("%s\n", MESSAGE);
	printf("SAY_HELLO NINE\n");

	return 0;
}
