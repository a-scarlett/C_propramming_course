#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n1 = 017253;
	int n2=0x1AC9F;
	int n3 = 0b11010010011;
	printf("17253 � ������������ ������� ��������� ����� %d\n", n1);
	printf("1AC9F � ����������������� ������� ��������� ����� %d\n", n2);
	printf("11010010011 � �������� ������� ��������� ����� %d\n", n3);
	return 1;
}