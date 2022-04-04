#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	printf("Enter number n: ");

	int n;
	scanf("%d", &n);
	printf("(-1)^n = %d\n", (n%2==0) ? 1 : -1 );
	return 0;
}