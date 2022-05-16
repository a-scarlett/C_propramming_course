#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
float* func(float *a, float *b) {
    return(a + (int)((b - a) * 3 / 8));
}

int main() {
    float a[8] = {0,1,2,3,4,5,6,7 };
    float *x = &a;
    float* y = (x + 7);
    float* z = (x + 2);
    printf("%d %d\n", (y-x), (z-x));
    printf("%p\n", func(x, y));
    printf("%p\n", z);

}