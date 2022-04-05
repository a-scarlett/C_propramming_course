#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x, y, res=0;
	char c;
	scanf("%lf%c", &x, &c);
	while (c != '=') 
	{
		scanf("%lf", &y);
		switch (c)
		{
		case '+':
			res= x + y;
			break;
		case '*':
			res = x * y;
			break;
		case '-':
			res = x - y;
			break;
		case '/':
			res = x / y;
			break;
		}
		x = res;
		scanf("%c", &c);
	}
	printf("Result = %lf", res);
	return EXIT_SUCCESS;
}