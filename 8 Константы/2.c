#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n1 = 'B';
	char m1= 'B';
	int n2 = 'C';
	char m2 = 'C';
	int n3 = 'D';
	char m3 = 'D';
	int n4 = 'a';
	char m4 = 'a';
	int n5 = 'b';
	char m5 = 'b';
	int n6 = '{';
	char m6 = '{';

	printf("Код символа %c равен %d\n", m1, n1);
	printf("Код символа %c равен %d\n", m2, n2);
	printf("Код символа %c равен %d\n", m3, n3);
	printf("Код символа %c равен %d\n", m4, n4);
	printf("Код символа %c равен %d\n", m5, n5);
	printf("Код символа %c равен %d\n", m6, n6);
	return 1;
}