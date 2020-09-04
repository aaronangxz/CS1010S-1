#include <stdio.h>

int print_10_to_b(int n, int b) {
    // your answer here
}

int print_b1_to_b2(int n, int b1, int b2) {
    // your answer here
}


int main(void) {
    int testcase1 = print_10_to_b(130, 5);
    int testcase2 = print_10_to_b(255, 2);
    int testcase3 = print_10_to_b(280, 8);
    int testcase4 = print_b1_to_b2(130, 5, 7);
    int testcase5 = print_b1_to_b2(10101010, 2, 10);
    printf("Test case 1: %d\n", testcase1);
    printf("Test case 2: %d\n", testcase2);
    printf("Test case 3: %d\n", testcase3);
    printf("Test case 4: %d\n", testcase4);
    printf("Test case 5: %d\n", testcase5);
    return 0;
}