#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double i = 10.0;
	while (i <= 15.0) {
		printf("f(%7.3f )=%17.12lf\n", i, 
			pow(sin(i*i),2)*log(i));
		i += 0.5;
	}
	return EXIT_SUCCESS;
}