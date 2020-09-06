#include <stdio.h>
#include <math.h>

double hypothenuse(double a, double b) {
    double hypo, sides;
    sides = (a * a) + (b * b);
    hypo = sqrt(sides);
    return hypo;
}

int main(void) {
    double testcase1 = hypothenuse(3,4);
    double testcase2 = hypothenuse(5,12);
    printf("Test case 1: %f\n", testcase1);
    printf("Test case 2: %f", testcase2);
    return 0;
}