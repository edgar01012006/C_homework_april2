#include <stdio.h>

int max_num(int num1, int num2);

int main()
{
	int num1 = 0;
	int num2 = 0;
	
	printf("enter first number\n");
	scanf("%d", &num1);
	printf("enter second number\n");
	scanf("%d", &num2);

	printf("max_num = %d", max_num(num1, num2));

	return 0;
}