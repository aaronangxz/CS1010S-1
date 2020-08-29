#include <stdio.h>
#include <math.h>

double get_bigger_root(int a, int b, int c) {
    double root1, root2, root_large, b_sq_minus_4ac;
    //Formula to find root
    b_sq_minus_4ac = (b * b) - (4 * a * c);
    root1 = (- b + sqrt(b_sq_minus_4ac)) / (2 * a);
    root2 = (-b - sqrt(b_sq_minus_4ac)) / (2 * a);
    printf("Root 1: %f,\nRoot 2: %f\n",root1, root2);

    //Determine larger root
    if (root1 > root2)
    {
        root_large = root1;
    }
    else
    {
        root_large = root2;
    }
    return root_large;
}

int main(void) {
    double testcase1 = get_bigger_root(1,-8,15);
    double testcase2 = get_bigger_root(3,11,9);
    printf("Test case 1: %f\n", testcase1);
    printf("Test case 2: %f", testcase2);
    return 0;
}