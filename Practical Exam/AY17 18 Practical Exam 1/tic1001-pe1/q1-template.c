#include <stdio.h>
#include <stdbool.h>

/* Question 1A */
int sum_of_factors(int n ) {
    // Your code here    
}

/* Question 1B */
bool is_lovely(int n1, int n2) {
    // Your code here

}

int main(void) {
    // Simple tests given
    // You should modify these tests to verify your code
    int n1 = 284, n2 = 220;

    printf("Sum of factors for %d is %d\n", n1, sum_of_factors(n1));
    printf("Sum of factors for %d is %d\n", n2, sum_of_factors(n2));

    if (is_lovely(n1, n2)) {
        printf("%d and %d is a pair of lovely numbers!\n", n1, n2);
    } else {
        printf("%d and %d is NOT a pair of lovely numbers!\n", n1, n2);
    }

    return 0;
}
