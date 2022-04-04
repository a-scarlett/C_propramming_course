#include <stdio.h>

#define f(x) (((x)*(x)*(x))-((x)*(x))+5*(x)-3)


int main() {
    int t = f(1);
    printf("%d", t);
    t = f(2);
    printf(" %d", t);
    return 0;
}
