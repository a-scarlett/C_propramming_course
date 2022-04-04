#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	printf("Enter number : ");

	int v, w;
	scanf("%d", &v);
	int t = (v | (v - 1)) + 1;
	w = t | ((((t & -t) / (v & -v)) >> 1) - 1);
	printf("%d", w);

	return 0;
}