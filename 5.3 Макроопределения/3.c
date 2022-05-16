#include <stdio.h>
#include <locale.h>

#define W(X,Y) (X##Y##X)


int main() {

	printf("%s", W("ss", "rr"));

}
