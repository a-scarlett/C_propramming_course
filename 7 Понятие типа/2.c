#include <stdio.h>
#include <stdlib.h>

enum Month
{
	January,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main()
{
	enum Month a, b;
	a = April;
	b = May;
	printf("I will study about %d month\n", b-a);
	return 1;
}