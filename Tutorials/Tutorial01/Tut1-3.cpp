#include <stdio.h>

int foo(int a) {
    if (a > 0)
        if (a >= 1000)
            a = 0;
        else
            if (a < 500)
                a = a * 2;
            else
                a = a * 10;
    else
        a = a + 3;
    return  a;
}

int foo1(int a) 
{
    if (a > 0 && a < 500)
    {
        a = a * 2;
    }
    else if (a >= 500 && a < 1000)
    {
        a = a * 10;
    }
    else if (a >= 1000)
    {
        a = 0;
    }
    else
    {
        a = a + 3;
    }
        
    return a;
}

int main(void) 
{
    int out = foo(555);  // edit the input to test
    int out1 = foo1(555);
    printf("Ans1: %d\n", out);
    printf("Ans2: %d\n", out1);
}