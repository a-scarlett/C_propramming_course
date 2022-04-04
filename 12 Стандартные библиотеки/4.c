#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;
	printf("Input the number: ");
	scanf("%d", &n);
	int k = log(n) / log(10)+1;
		printf("%d\n", k);
	return EXIT_SUCCESS;
}