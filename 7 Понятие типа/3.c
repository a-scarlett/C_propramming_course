#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum Pizza
{
	carrots,
	tomatoes,
	ketchup,
	ham,
	cheese,
	pepper
};

int main()
{
	enum Pizza a, b, c;
	a = carrots;
	b = ham;
	c = pepper;
	if(a==0 || b == 0 || c == 0)
	printf("It is pizza bolognese!\n");
	return 1;
}