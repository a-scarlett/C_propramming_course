#include <stdio.h>
#include <locale.h>

#define W(X,Y) printf("word one %s = \"word two %s\"", #X, #Y)


int main() {

	setlocale(LC_ALL, "Rus");
	W(a,b);
}
