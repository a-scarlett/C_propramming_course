#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char x, y;
	double m, n;

	scanf("%c %lf %c", &x, &m, &y);

	if (x == y)
	{
		n = m;
	}
	else 
	{
		switch (x)
		{
		case 'g':
			switch (y)
			{
			case 'k':
				n = m / 1000;
				break;
			case 'c':
				n = m / 100000;
				break;
			case 't':
				n = m / 1000000;
				break;
			}
			break;
		case 'k':
			switch (y)
			{
			case 'g':
				n = m*1000;
				break;
			case 'c':
				n = m / 100;
				break;
			case 't':
				n = m / 1000;
				break;
			}
			break;
		case 'c':
			switch (y)
			{
			case 'g':
				n = m *100000;
				break;
			case 'k':
				n = m*100;
				break;
			case 't':
				n = m / 10;
				break;
			}
			break;
		case 't':
			switch (y)
			{
			case 'g':
				n = m * 1000000;
				break;
			case 'k':
				n = m * 1000;
				break;
			case 'c':
				n = m*10;
				break;
			}
			break;
		}
	}
	printf("%lf %c = %lf %c", m, x, n, y);
	return EXIT_SUCCESS;
}