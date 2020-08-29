#include <stdio.h>
#include <math.h>

double investment(int p, int r, int n) {
    double total;
    total = p * (1 - pow((r / 100.0),n + 1)) / (1 - (r / 100.0));
    return total;
}

int main(void) {
    double out = investment(100,10,5);
    printf("%f", out);
    return 0;
}