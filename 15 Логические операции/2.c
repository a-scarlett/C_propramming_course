#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double x1, y1, x2, y2, x3, y3;

	printf("Enter point coordinates : ");

	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	scanf("%lf %lf", &x3, &y3);

	double Tol = 1e-12;

	double d = (fabs((y2-y1)*x3+(x1-x2)*y3+x1*(y1-y2)+y1*(x2-x1))/sqrt(pow((y2- y1),2) + pow((x1 - x2),2)));

	if (fabs(d)<Tol)
		printf("1");
	else printf("0");
	return EXIT_SUCCESS;
}