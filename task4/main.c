#include <stdio.h>

float sum(float num1, float num2);

int main()
{
	float num1 = 3.14;
	float num2 = 1.5;
	float res = 0;

	res = sum(num1, num2);

	printf("res = %f", res);

	return 0;
}