#include <stdio.h>

int part_a(int a, int b, int c) {
    int max;
    if (a > b || a > c) {
        max = a;
    } else {
        if (b > c) {
            max = b;
        } else {
            max = c;   
        }
    }
    return max;
}

int part_b(int a, int b, int c) {
    int max = a;
    if (b > a) {
        max = b;
    }
    if (c > a) {
        max = c;   
    }
    return max;    
}


int part_c(int a, int b, int c) {
    int max;
    if (a > b) {
        if (a > c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if (b > c) {
            max = b;
        } else {
            max = c;
        }
    }
    return max;
}


int main(void) 
{
    int out = part_c(1,2,3);  // edit the input to test
    printf("Your function output is: %d\n", out);
}