#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int* p = 0;
    *p = 10;
    printf("%d", *p);
    //exception: p is nullptr
}