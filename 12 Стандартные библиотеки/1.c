#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double x1, y1, x2, y2;
	printf("Input first coordinates: "); scanf("%lf %lf", &x1, &y1);
	printf("Input second coordinates: "); scanf("%lf %lf", &x2, &y2);
	printf("y=%lf *x + %lf\n", (y2-y1)/(x2-x1), y1-x1* (y2 - y1) / (x2 - x1));
	return 1;
}