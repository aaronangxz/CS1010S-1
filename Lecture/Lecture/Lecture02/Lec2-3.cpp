#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

// Edit your answer here
int sum_odd_n(int n) 
{
    int i=1;
    int sum = 0;
    
    while (i<=(2*n)-1)
    {
            sum += i; 
            i = i+2;
    }
    return sum;
}

// main function for your testing. Do not copy into Coursemology
int main(void) 
{
    int out = sum_odd_n(4);  // edit the input to test
    printf("Your function output is: %d\n", out);
}