#include <stdio.h>

/* Question 2 */
int num_payments(double principal, double interest, double factor, double payment) {
    double remaining = principal;
    int month = 0;

    while (remaining >= 0)
    {
        remaining = principal * (1+(interest)) - payment;
        //printf("Remaining: %f\n",remaining);
        month++;
        principal = remaining;
        if (month % 12 == 0)
        {
            interest = interest * factor;
        }
        if (interest > payment)
        {
            return -1;
        }
    }
    return month;
}

int main(void) {
    double principal = 1000000;
    double interest = 0.005;
    double factor = 1.01;
    double payment = 6000;
    printf("Number of payments: %d\n", num_payments(principal, interest, factor, payment));
}