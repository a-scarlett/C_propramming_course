#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double a[15][2];
    double r, max=0;
    for (int i = 0; i < 15; i++) {
        scanf("%lf %lf", &a[i][0], &a[i][1]);
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            r = sqrt(pow(a[i][0] - a[j][0], 2) + pow(a[i][1] - a[j][1], 2));
                if (r > max) 
                {
                    max = r;
                }
        }
        
     }
     printf("%lf\n", max);
    }