#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//проверка кодировки
unsigned long long factorial(int n) {
	if (n == 1) return 1;
	else return n*(factorial(n - 1));
}

int main()
{
	double x;
	unsigned long long res=1;
	int i = 1;
	scanf("%lf", &x);
	while (pow(x, i) / factorial(i) > 1e-6) 
	{
		res += pow(x, i) / factorial(i);
		i++;
	}
	printf("Result = %llu", res);
	return EXIT_SUCCESS;
}