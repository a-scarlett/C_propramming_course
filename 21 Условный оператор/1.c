#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	printf("Enter numbers: ");
	int n, m;
	scanf("%d%d", &n, &m);
	if ((n < 18) & (n > 9) & (n != 13 | m < 30) & (n != 14 | m > 30))
		printf("Open\n");
	else printf("Closen\n");
	return 0;
}