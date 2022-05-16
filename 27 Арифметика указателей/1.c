#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int a;
    char b;
    bool c;
    short d;
    long e;
    float f;
    double g;
    long double h;
    int k;
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
    printf("&c = %p\n", &c);
    printf("&d = %p\n", &d);
    printf("&e = %p\n", &e);
    printf("&f = %p\n", &f);
    printf("&g = %p\n", &g);
    printf("&h = %p\n", &h);
    printf("&k = %p\n", &k);
    printf("%d %d\n ", (&b - &a), sizeof(b));
    printf("%d %d\n ", (&c - &b), sizeof(c));
    printf("%d %d\n ", (&d - &c), sizeof(d));
    printf("%d %d\n ", (&e - &d), sizeof(e));
    printf("%d %d\n ", (&f - &e), sizeof(f));
    printf("%d %d\n ", (&g - &f), sizeof(g));
    printf("%d %d\n ", (&h - &g), sizeof(h));
    printf("%d %d\n ", (&k - &h), sizeof(k));

}