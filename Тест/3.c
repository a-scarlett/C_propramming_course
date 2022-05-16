#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//просто коммент

_Bool similarity(double x1, double y1, double z1, double x2, double y2, double z2, double Tol ) {
	if ((fabs(x1 / x2 - y1 / y2) < Tol) & (fabs(x1 / x2 - z1 / z2) < Tol) & (fabs(z1 / z2 - y1 / y2) < Tol)) return 1;
	else return 0;
}

int main()
{
	double x1, y1, z1, x2, y2, z2;

	printf("Enter the lengths of the sides of the first triangle : ");
	scanf("%lf %lf %lf", &x1, &y1, &z1);

	printf("Enter the lengths of the sides of the second triangle : ");
	scanf("%lf %lf %lf", &x2, &y2, &z2);

	double Tol = 1e-12;
	
	if (similarity(x1, y1, z1, x2, y2, z2, Tol) | similarity(x1, z1, y1, x2, y2, z2, Tol) | similarity(y1, x1, z1, x2, y2, z2, Tol) | similarity(y1, z1, x1, x2, y2, z2, Tol) | similarity(z1, x1, y1, x2, y2, z2, Tol) | similarity(z1, y1, x1, x2, y2, z2, Tol))
		printf("Yes, it is similarity");
	else printf("No, it is not.");
	return EXIT_SUCCESS;
}
