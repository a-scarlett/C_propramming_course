#include <stdio.h>
#include <locale.h>

#define W(X,Y) (X##Y##X)


int main() {

	setlocale(LC_ALL, "Rus");

	printf("%s", W("ss", "rr"));

}