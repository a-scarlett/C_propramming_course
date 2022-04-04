#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

unsigned int f(unsigned int x) {
	x = x * 0x08040201;
	x = x >> 3;
	x = x & 0x11111111;
	x = x * 0x11111111;
	return x >> 28;
}

#define n 3

int main() {

	setlocale(LC_ALL, "Rus");
	unsigned int answer = f(n);

	printf("Количество 1битов %d \n", answer );
if(answer == 20)
	printf("Yes %d", f(n));
else
	printf("No");

	return 0;
}