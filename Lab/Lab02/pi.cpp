#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

double calculatePi(int nTerms)
{
    double pi;
    for (int i = 0; i < nTerms; i++)
    {
        pi += (4.0 * (double(pow(-1,i + 2)))) / (2 * i + 1);
    }
    return pi;
}

int main(int argc, char const *argv[])
{
    /* code */
    //double testcase1 = calculatePi(1);
    //double testcase2 = calculatePi(5);
    //double testcase3 = calculatePi(10000);

    //cout << "Test case 1: " << testcase1 << endl;
    //cout << "Test case 2: " << testcase2 << endl;
    //cout << "Test case 3: " << testcase3 << endl;

    printf("%.10f\n", calculatePi(1));
    printf("%.10f\n", calculatePi(5));
    printf("%.10f\n", calculatePi(10000));
    return 0;
}