#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	printf("Enter numbers : ");

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("Minimum=%d\n", (a >= b & c>=b) ? b : (c>=a & b>=a) ? a : c);

	return 0;
}