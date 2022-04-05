#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int max, premax, d;
	scanf("%d %d", &max, &premax);
	if (premax > max) {
		d = max;
		max = premax;
		premax = d;
	}
	for (int i = 2; i < 10; i++) {
		scanf("%d", &d);
		if (d > max) {
			premax = max;
			max = d;
		}
		else if (d > premax) premax = d;
	}
	
	printf("Max =%d, premax =%d", max, premax);
	return EXIT_SUCCESS;
}