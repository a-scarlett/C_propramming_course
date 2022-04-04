#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	printf("Enter numbers : ");

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("Number of roots of the equation= %d\n", (b*b-4*a*c>0) ? 2 : (b * b - 4 * a * c == 0) ? 1 : 0);
	return 0;
}