#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("������ �������� ���� _Bool ����� %d ������.\n", sizeof(_Bool));
	printf("������ �������� ����  char ����� %d ������.\n", sizeof(char));
	printf("������ �������� ���� short ����� %d ������.\n", sizeof(short));
	printf("������ �������� ���� int ����� %d ������.\n", sizeof(int));
	printf("������ �������� ����  long int ����� %d ������.\n", sizeof(long int));
	printf("������ �������� ���� long long int ����� %d ������.\n", sizeof(long long int));
	return EXIT_SUCCESS;
}
