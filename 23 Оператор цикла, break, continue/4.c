#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

char next(char x) {
	if (x == 'a') return 'b';
	if (x == 'b') return 'c';
	if (x == 'c') return 'a';
	else return '.';
}

int main()
{
	char c, ask='a';
	int res = 0;
	scanf("%c", &c);
	while (c != '.') {
		if (c == ask)
		{ 
			res++; 
			ask = next(ask);
		}
		scanf("%c", &c);
	}
	printf("result = %d", res);
	return EXIT_SUCCESS;
}