#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;

	scanf("%d", &n);

	switch (n/10)
	{
	case 1:
		switch (n % 10) {
		case 1:
			printf("����������� ������");
			break;
		case 2:
			printf("��������� �������");
			break;
		case 3:
			printf("���������� �������");
			break;
		case 4:
			printf("������������ �������");
			break;
		case 5:
			printf("���������� �������");
			break;
		case 6:
			printf("����������� ������");
			break;
		case 7:
			printf("���������� ������");
			break;
		case 8:
			printf("������������� ������");
			break;
		case 9:
			printf("������������ ������");
			break;
		}
		break;

	case 2:
		printf("�������� ");
		break;
	case 3:
		printf("�������� ");
		break;
	case 4:
		printf("����� ");
		break;
	case 5:
		printf("��������� ");
		break;
	case 6:
		printf("���������� ");
		break;
	case 7:
		printf("��������� ");
		break;
	case 8:
		printf("����������� ");
		break;
	case 9:
		printf("��������� ");
		break;

	}
	if (n / 10 != 1) {
		switch (n % 10) {
		case 0:
			printf("������");
			break;
		case 1:
			printf("���� �������");
			break;
		case 2:
			printf("��� �������");
			break;
		case 3:
			printf("��� �������");
			break;
		case 4:
			printf("������ �������");
			break;
		case 5:
			printf("���� ������");
			break;
		case 6:
			printf("����� ������");
			break;
		case 7:
			printf("���� ������");
			break;
		case 8:
			printf("������ ������");
			break;
		case 9:
			printf("������ ������");
			break;
		}
	}
	return EXIT_SUCCESS;
}