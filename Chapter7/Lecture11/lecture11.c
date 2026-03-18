#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main()
{
	float max = -FLT_MAX;
	float min = FLT_MAX;
	float sum = 0.0f;
	float input;
	int n = 0;

	while (scanf("%f", &input) == 1)
	{
		if((input > 0) && (input < 101))
		{
			max = (input > max) ? input : max;
			min = (input > min) ? min : input;

			sum += input;
		}
	}
	printf("max is %f, min is %f sum is %f", max, min, sum);

	return 0;
}