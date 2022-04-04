#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;

	printf("Enter number : ");

	scanf("%d", &n);
	printf("%d", 1<<n);
	return EXIT_SUCCESS;
}