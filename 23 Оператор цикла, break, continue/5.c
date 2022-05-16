#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2*n+1; i++) {
        for (int j = 0; j < 2*n+1; j++) {
            if (((i -n) * (i - n) + (j - n) * (j - n) <= n * n + n) && ((i - n) * (i - n) + (j - n) * (j - n) >= n * n - n)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}