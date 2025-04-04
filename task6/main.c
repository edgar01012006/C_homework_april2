#include <stdio.h>

double fahr(double cel);

int main()
{
	double cel = 0;

	printf("enter degree in Celsius\n");
	scanf("%lf", &cel);

	printf("F = %.2lf\n", fahr(cel));

	return 0;
}