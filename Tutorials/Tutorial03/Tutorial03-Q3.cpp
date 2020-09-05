#include <stdio.h>
#include <math.h>

double area1(double a, double b) 
{
    double area1 = 0.5 * a * b;
    return area1;
}

double area2(double a, double b,double c) 
{
    double area2 = 0.5 * a * b * sin(c);
    return area2;
}

double area3(double a, double b, double c) 
{
    double s = (a + b + c) / 2;
    double area3 = sqrt(s * (s -a)*(s - b)*(s - c));
    return area3;
}

int main(void) {
    double testcase1 = area1(2, 3);
    double testcase2 = area2(1, 4, 1.2);
    double testcase3 = area3(4, 5, 6);
    printf("Test case 1: %f\n", testcase1);
    printf("Test case 2: %f\n", testcase2);
    printf("Test case 3: %f\n", testcase3);
    return 0;
}