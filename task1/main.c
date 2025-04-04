#include <stdio.h>

int sum(int num1, int num2);

int main()
{
	int num1 = 3;
	int num2 = 4;
	int res = 0;
	
	res = sum(num1, num2);
	
	printf("res = %d", res);

	return 0;
}