#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, res=1;
	printf("n = ");
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++)
		res *= i;
	printf("Result = %d\n", res );
	return 1;
}