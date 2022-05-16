#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int z;

int main() {
    int x;
    static y;
    printf("%d %d %d", &x, &y, &z);
}