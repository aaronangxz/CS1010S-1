#include <stdio.h>

int f(int x, int y);

int main(void) 
{
    int x = 3, y = 4;
    //0. x = 3, y =4

    x = f(x,y);
    //1. x = 3*10 + 4 = 34

    y = f(x, f(y,x));
    //2. y = f(34, f(4,34)) = f(34, 74) = 34*4 + 714 = 414   

    printf("x = %d; y = %d\n", x, y);
    return 0;
}

int f(int x, int y) 
{
    return x * 10 + y;
}