#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[50];
    for (int i = 0; i < 50; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++) {
        while (a[i] > 0) {
            printf("*");
            a[i]--;
        }
        printf("\n");
    }
}