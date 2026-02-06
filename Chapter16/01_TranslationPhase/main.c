#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
		Program written in C

		Translating
		Preprocessing
		Compiling
		Linking

		Executable
	*/

	/*
		International characters
	*/

	puts("안녕하세요? 한글을 사랑합니다.\n");

	/*
		Trigraph Sequences
		- Some keyboards don't provide all the symbols used in C.
		- Three-character sequences

		Trigraph		Replacement
		??=				#
		??/				\
		??'				^
		??(				[
		??)				]
		??!				|
		??<				{
		??>				}
		??-				~

		/Zc:trigraphs
	*/

	int arr[3] = { 1, 2, 3 };
	//printf("arr??(0??) == %d\n", arr ? ? (0 ? ? ));
	//printf("arr[0] == %d\n", arr[0]);



	/*
		Digraphs
		- Two-character sequences

		Digraph			Equivalent
		<:				[
		:>				]
		<%				{
		%>				}
		%:				#
	*/
		
	printf("arr<:1:> == %d", arr<:1 :>);


	/* Two physical lines vs One logical line */

	printf("This is a very very very very long long long long long long");


	
	/*
		Tokens
		- Groups separated from each other by spaces, tabs, or line breaks
		Whitespace characters -> a single space
	*/



	return 0;
}