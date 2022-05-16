#include <stdio.h>
#include <locale.h>

#define W(X,Y) printf("word one %s = \"word two %s\"", #X, #Y)


int main() {
	
	W(a,b);
}
