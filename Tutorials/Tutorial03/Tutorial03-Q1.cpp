#include <stdio.h>

int f(int x, int y);

int main(void) {
    int x = 3, y = 4;
    
    x = f(x,y);
    y = f(x, f(y,x));
    printf("x = %d; y = %d\n", x, y);
    return 0;
}

int f(int x, int y) {
    return x*10 + y;
}