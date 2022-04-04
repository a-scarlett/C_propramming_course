#include <stdio.h>
#include <locale.h>

#ifndef A
#define A
	#include "a.h"
#endif

#ifndef B
#define B
#include "a.h"
#endif

int main() {

	setlocale(LC_ALL, "Rus");
	int x = 5;
	x = a(x);
	printf("%d", x);
	return 0;
}