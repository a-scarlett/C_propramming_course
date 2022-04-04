#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a, b, c;
	int n;

	printf("Enter numbers : ");
	scanf("%d%d%d", &a, &b, &c);

	n = (a&b)|(a&c)|(b&c);

	printf("%d", n);
	return EXIT_SUCCESS;
}