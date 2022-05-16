#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	int a = 1, b=1073741824;
	if (*((int*)&a)) {
		printf("Little Endian ");
	}
	else if (*((int*)&b)){
		printf("Big Endian ");
	}
	else
	printf("Mix Endian");
}