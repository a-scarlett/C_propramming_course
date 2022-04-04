#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n, i, j;
	int n_i, n_j;
	printf("Enter numbers : ");
	scanf("%d%d%d", &n, &i, &j);

	n_i = (n >> i) & 1;
	n_j = (n >> j) & 1;

	if (n_i != n_j) {
		if (n_j) {
			n = n - (1 << j) + (1 << i);
		}
		else {
			n = n + (1 << j) - (1 << i);
		}
	}

	printf("%d", n);
	return EXIT_SUCCESS;
}