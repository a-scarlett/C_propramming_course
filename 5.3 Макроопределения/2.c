#include <stdio.h>
#include <locale.h>

#define W(X,Y) printf("содержимое %s = \"содержимое %s\"", #X, #Y)


int main() {

	setlocale(LC_ALL, "Rus");
	W(a,b);
}