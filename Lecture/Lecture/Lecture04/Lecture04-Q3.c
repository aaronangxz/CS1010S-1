#include <stdio.h>

double square(double x) {
    return x * x;
}
double mean(int a, int b) {
    return (a+b)/2.0;
}
double variance(int a, int b) {
    double var;
    var = mean(square(a),square(b)) - square(mean(a,b));
    return var;
}

int main(void) {
    double testcase1 = variance(5, 1);
    double testcase2 = variance(3, 3);
    double testcase3 = variance(2, 4);
    double testcase4 = variance(1, 5);
    printf("Test case 1: %f",testcase1);
    printf("Test case 2: %f",testcase2);
    printf("Test case 3: %f",testcase3);
    printf("Test case 4: %f",testcase4);
    return 0;
}