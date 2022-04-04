#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n, i;
	int n_i;

	printf("Enter numbers : ");
	scanf("%d%d", &n, &i);

	n_i = n & ((int)pow(2, i) - 1);

	if ((n>>i)&1)
	n -= (int)pow(2, i);

	n = n_i +((n - n_i) >> 1);

	printf("%d", n);
	return EXIT_SUCCESS;
}