#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double a, b, c;
	printf("Enter sides of triangles: ");
	scanf("%lg%le%lf", &a, &b, &c);
	if (a + b > c && b + c > a && c + a > b)
		printf("1");
	else printf("0");
	return EXIT_SUCCESS;
}