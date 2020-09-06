#include <stdio.h>
int bigger_sum(int a, int b, int c) {
    int sum, large;
    if (a >= b && c >= b)
    {
        sum = a*a + c*c;
    }
    else if (a >= c && b >= c)
    {
        sum = a*a + b*b;
    }
    else if (b >= a && c >= a)
    {
        sum = b*b + c*c;
    }
    return sum;
}

int main(void) {
    int testcase1 = bigger_sum(2,3,1);
    int testcase2 = bigger_sum(-1,-2,-3);
    int testcase3 = bigger_sum(-1,2,10);
    int testcase4 = bigger_sum(1,2,3);
    int testcase5 = bigger_sum(5,5,5);
    printf("Test case 1: %d\n", testcase1);
    printf("Test case 2: %d\n", testcase2);
    printf("Test case 3: %d\n", testcase3);
    printf("Test case 4: %d\n", testcase4);
    printf("Test case 5: %d\n", testcase5);

    return 0;
}