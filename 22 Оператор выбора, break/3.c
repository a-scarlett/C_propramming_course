#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;

	scanf("%d", &n);

	switch (n/10)
	{
	case 0:
		switch (n % 10)
			case 0:
				printf("one penny");
				break;
			case 1:
				printf("Odna kopeek");
				break;
			case 2:
				printf("Dve kopeek");
				break;
			case 3:
				printf("Nol' kopeek");
				break;
			case 4:
				printf("Nol' kopeek");
				break;
			case 5:
				printf("Nol' kopeek");
				break;
			case 6:
				printf("Nol' kopeek");
				break;

		printf("%d kopeika", n);
		break;
	case 2:
	case 3:
	case 4:
		printf("%d kopeiki", n);
		break;
	default:
		printf("%d kopeiek", n);
		break;
	}
	return EXIT_SUCCESS;
}