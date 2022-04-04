#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	printf("Enter number n: ");

	int n;
	scanf("%d", &n);
	printf("cos(x)^(n) = %s\n", (n%4==0) ? "cos(x)" : (n % 4 == 1) ? "-sin(x)" : (n % 4 == 2) ?  "-cos(x)" : "sin(x)" );
	return 0;
}