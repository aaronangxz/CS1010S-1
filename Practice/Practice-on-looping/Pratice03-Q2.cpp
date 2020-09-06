#include <stdio.h>
#include <stdbool.h>

int invert_number(int num) {
    int reverse = 0, remainder;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    return reverse;    
}

/*
Loop 1. 
Num = 1234
Remainder = 4
Reverse = 0 * 10 + 4 = 4
Num = 123

Loop2.
Num = 123
Remainder = 3
Reverse = 4 * 10 + 3 = 43
Num = 12

Loop3.
Num = 12
Remainder = 2
Reverse = 43*10 + 2 = 432
Num = 1

Loop4.
Remainder = 1
Reverse = 432*10 + 1 = 4321
Num = 0
*/

int main(void) {
    int testcase1 = invert_number(32120);
    int testcase2 = invert_number(202);
    int testcase3 = invert_number(1);
    int testcase4 = invert_number(1234);
    printf("Test case 1: %d\n", testcase1);
    printf("Test case 2: %d\n", testcase2);
    printf("Test case 3: %d\n", testcase3);
    printf("Test case 4: %d\n", testcase4);

    return 0;
}