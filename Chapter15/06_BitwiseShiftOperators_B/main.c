#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define BYTE_MASK 0xff

int main()
{
	unsigned int rgba_color = 0x66DCAAFF; //2개에 1바이트씩..
	unsigned char red, green, blue, alpha;	
	// 1100 1110 1010 1010 1111 1111 1111 1111
	alpha = ((rgba_color >> 0) & BYTE_MASK); // 투명도
	blue = ((rgba_color >> 8) & BYTE_MASK);
	green = ((rgba_color >> 16) & BYTE_MASK);
	red = ((rgba_color >> 24) & BYTE_MASK);
	// 1111 1111
	
	printf("(R, G, B, A) = (%hhu\n", ((rgba_color >> 24) & BYTE_MASK));

	printf("(R, G, B, A) = (%hhu, %hhu, %hhu, %hhu)\n", red, green, blue, alpha);
	return 0;
}

/*
	alpha = rgba_color & BYTE_MASK;
	blue  = (rgba_color >> 8 & BYTE_MASK);
	green = (rgba_color >> 16 & BYTE_MASK);
	red   = (rgba_color >> 24 & BYTE_MASK);
*/

/*
	alpha	= 0;//TODO:
	blue	= 0;//TODO:
	green	= 0;//TODO:
	red		= 0;//TODO:
*/