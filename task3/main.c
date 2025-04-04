#include <stdio.h>

int is_positive(int num);

int main()
{
	int num = 0;

	printf("enter a number\n");
	scanf("%d", &num);

	printf("%d", is_positive(num));

	return 0;
}