#include <stdio.h>
#include <math.h>

int nth_digit(int num, int n) {
    //nth digit = (num % 10^n) / 10^n-1
    int digitn = pow(10,n);
    int digitn_del= pow(10, n-1);
    printf("Digit: %d\n",digitn);
    int results = (num % digitn) / (digitn_del);
    printf("Result: %d\n",results);
    //If out of range
    if (digitn > num)
    {
        results = 0;
    }
    else
    {
        results = results;
    }
    
    return results;
}

int main(void) {
    int testcase1 = nth_digit(17263,2);
    int testcase2 = nth_digit(17263,6);
    printf("Test case 1: %d\n", testcase1);
    printf("Test case 2: %d", testcase2);
    return 0;
}