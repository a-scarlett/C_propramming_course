#include <stdio.h>
#include <locale.h>

#define P 3
#define Q 4
#define R 5


int main() {

	setlocale(LC_ALL, "Rus");

#if P+Q>R && P+R>Q && Q+R>P
	printf("Можно составить треугольник");
#else
#error Треугольник составить нельзя
#endif
	return 0;
}