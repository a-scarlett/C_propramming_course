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
			printf("одиннадцать копеек");
			break;
		case 2:
			printf("двендцать копейка");
			break;
		case 3:
			printf("тринадцать копейки");
			break;
		case 4:
			printf("четырнадцать копейки");
			break;
		case 5:
			printf("пятнадцать копейки");
			break;
		case 6:
			printf("шестнадцать копеек");
			break;
		case 7:
			printf("семнадцать копеек");
			break;
		case 8:
			printf("восемьнадцать копеек");
			break;
		case 9:
			printf("девятнадцать копеек");
			break;
		}
		break;

	case 2:
		printf("двадцать ");
		break;
	case 3:
		printf("тридцать ");
		break;
	case 4:
		printf("сорок ");
		break;
	case 5:
		printf("пятьдесят ");
		break;
	case 6:
		printf("шестьдесят ");
		break;
	case 7:
		printf("семьдесят ");
		break;
	case 8:
		printf("восемьдесят ");
		break;
	case 9:
		printf("девяносто ");
		break;

	}
	if (n / 10 != 1) {
		switch (n % 10) {
		case 0:
			printf("копеек");
			break;
		case 1:
			printf("одна копейка");
			break;
		case 2:
			printf("две копейки");
			break;
		case 3:
			printf("три копейки");
			break;
		case 4:
			printf("четыре копейки");
			break;
		case 5:
			printf("пять копеек");
			break;
		case 6:
			printf("шесть копеек");
			break;
		case 7:
			printf("семь копеек");
			break;
		case 8:
			printf("восемь копеек");
			break;
		case 9:
			printf("девять копеек");
			break;
		}
	}
	return EXIT_SUCCESS;
}