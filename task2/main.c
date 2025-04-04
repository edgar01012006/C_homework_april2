#include <stdio.h>

int square(int num);

int main()
{
	int num = 5;
	int res = 0;

	res = square(num);

	printf("res = %d", res);

	return 0;
}