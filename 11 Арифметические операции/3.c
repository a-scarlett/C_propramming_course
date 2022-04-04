#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, n;
	printf("a = ");
	scanf("%d", &a);
	if (a % 32 != 0) n = a / 32 + 1;
	else n = a / 32;
	printf("Result = %d\n", n );
	return 1;
}