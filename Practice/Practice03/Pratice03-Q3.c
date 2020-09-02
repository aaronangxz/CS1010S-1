#include <stdio.h>
#include <stdbool.h>

int number_of_digits(int num) {
    int count = 0;
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num /= 10;
            count ++ ;
        }
    }
    return count;
}

int main(void) {
    int testcase1 = number_of_digits(0);
    int testcase2 = number_of_digits(55555);
    int testcase3 = number_of_digits(1000);
    int testcase4 = number_of_digits(1234);
    printf("Test case 1: %d\n", testcase1);
    printf("Test case 2: %d\n", testcase2);
    printf("Test case 3: %d\n", testcase3);
    printf("Test case 4: %d\n", testcase4);

    return 0;
}