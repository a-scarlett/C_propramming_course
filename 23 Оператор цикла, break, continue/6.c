#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    char c;
    int n=0;
    unsigned long long rec=0, max=0;
    while (n<20) 
    {
        scanf("%c", &c);
        n++;
        while ((c >= '0') & (c <= '9'))
        {
            rec = rec * 10 + c-'0';
            scanf("%c", &c);
            n++;
        }
        if (rec > max) 
        { 
            max = rec;
        }
        rec = 0;
    }
    printf("%llu", max);
}