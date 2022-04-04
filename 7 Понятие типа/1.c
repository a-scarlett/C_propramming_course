#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Размер значения типа _Bool равен %d байтов.\n", sizeof(_Bool));
	printf("Размер значения типа  char равен %d байтов.\n", sizeof(char));
	printf("Размер значения типа short равен %d байтов.\n", sizeof(short));
	printf("Размер значения типа int равен %d байтов.\n", sizeof(int));
	printf("Размер значения типа  long int равен %d байтов.\n", sizeof(long int));
	printf("Размер значения типа long long int равен %d байтов.\n", sizeof(long long int));
	return EXIT_SUCCESS;
}
