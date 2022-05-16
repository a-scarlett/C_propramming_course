#include <stdio.h>
#include <stdlib.h>

void str(int n) {
    if (n > 9) str(n / 10);
    printf("%d ", n % 10);
}

void rev(int n) {
    printf("%d ", n % 10);
    if (n > 9) rev(n / 10);
}

int main() {
    rev(12345);
    printf("\n");
    str(12345);
    printf("\n");
}