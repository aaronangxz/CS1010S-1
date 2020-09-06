#include <stdio.h>
#include <stdbool.h>

bool is_perfect_number(int num) {
    int sum = 0;
    for (int i = 1 ; i < num ; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void) {
    int testcase1 = is_perfect_number(498);
    int testcase2 = is_perfect_number(1);
    int testcase3 = is_perfect_number(30);
    int testcase4 = is_perfect_number(6);
    printf("Test case 1: %d\n", testcase1);
    printf("Test case 2: %d\n", testcase2);
    printf("Test case 3: %d\n", testcase3);
    printf("Test case 4: %d\n", testcase4);

    return 0;
}