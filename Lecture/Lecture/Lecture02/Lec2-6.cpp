#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

// Edit your answer here
int factorial(int n) {
    long long fact = 1;
      for (int i = 1; i<=n; i++)
    {
            fact = fact * i;
    }
    return fact;
}

// main function for your testing. Do not copy into Coursemology
int main(void) 
{
    int out = factorial(10);  // edit the input to test
    printf("Your function output is: %d\n", out);
}