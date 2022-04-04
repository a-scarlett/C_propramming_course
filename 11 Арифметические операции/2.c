#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a = 0, b = 0, c = 0;
	printf("a = "); scanf("%lf", &a);
	printf("b = "); scanf("%lf", &b);
	printf("c = "); scanf("%lf", &c);
	double res = ((a * b + 7 * c) * (a * b + 7 * c) * (a * b + 7 * c) - (a * a + b * b + c * c)) / (b * (1 - a) - 2 * a * c);

	printf("Результат = %lf\n", res );
	return EXIT_SUCCESS;
}