#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int* x;
    double* y;
    char* z;
    printf("%d %d %d", sizeof(*x), sizeof(*y), sizeof(*z));
}