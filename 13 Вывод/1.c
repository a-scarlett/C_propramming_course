#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	printf("Result =%20.15lf\n",
		(pow(pow(sin(1.28), 2) + 1, 1 / 3) - 26 + atan(1.17 + 2.95)) / (pow(2.01 - pow(cos(3.86), 2), 5.84) + 25.362));

	return EXIT_SUCCESS;
}