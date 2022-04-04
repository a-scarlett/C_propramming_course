#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double a, b, c, p;
	printf("Input the lengths: "); scanf("%lf %lf%lf", &a, &b, &c);
	p = (a + b + c) / 2;
		printf("Square=%f\n",
		sqrt(p*(p-a) * (p - b) * (p - c)));
	return EXIT_SUCCESS;
}