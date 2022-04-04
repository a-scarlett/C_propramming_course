#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;
	printf("Input the sum: "); scanf("%d", &n);
	int k = log((double)(pow(10, 6) / n)) / log(1.03) + 1;
		printf("%d years\n", k);
	return EXIT_SUCCESS;
}