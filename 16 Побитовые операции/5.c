#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i;

	printf("Enter numbers : ");
	scanf("%d", &i);

	i = i - ((i >> 1) & 0x55555555);        // &1010101010101010101010101010101
	i = (i & 0x33333333) + ((i >> 2) & 0x33333333);  // &110011001100110011001100110011
	i = (i + (i >> 4)) & 0x0F0F0F0F;        // groups of 8
	i = (i * 0x01010101) >> 24;
	printf("%d", i);

	return 0;
}