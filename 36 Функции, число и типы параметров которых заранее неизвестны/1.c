#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdarg.h>

double average(double x,...) {
	if (x == 0) return 0;
	double res = x,  y = 1;
	int n = 0;
	va_list l;
	va_start(l, x);
	while (y != 0) {
		n++;
		y= va_arg(l, double);
		res += y;
	}
	va_end(l);
	return res/n;
}

int main() {
	printf("%lf\n", average(1.0, 2.0, 3.0, 4.0, 5.0, 0.0));
	printf("%lf\n", average(1.0, 0.0));
	printf("%lf\n", average( 0.0));
}