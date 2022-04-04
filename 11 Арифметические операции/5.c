#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m;
	printf("Input the number: "); 
	scanf("%d", &n);
	m = 'A';
	printf("Numbered letter = %c\n", (m+(100-n)/10));
	return 1;
}