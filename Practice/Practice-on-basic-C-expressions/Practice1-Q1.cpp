#include <stdio.h>
#include <float.h>

float bmi(int mass, int height) {
    float bmi;
    bmi = (mass / 1000.0) / ((height / 100.0)*(height / 100.0));
    return bmi;
}

int main(void) {
    float testcase1 = bmi(60000,168);
    printf("Test case 1: %f\n", testcase1);
    return 0;
}