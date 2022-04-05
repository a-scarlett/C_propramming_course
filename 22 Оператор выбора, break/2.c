#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char c;
	double x, y;

	scanf("%lf %c %lf", &x, &c, &y);

	switch (c)
	{
	case '+':
		printf("%lf", x + y);
		break;
	case '*':
		printf("%lf", x * y);
		break;
	case '-':
		printf("%lf", x - y);
		break;
	case '/':
		printf("%lf", x / y);
		break;
	}
	return EXIT_SUCCESS;
}