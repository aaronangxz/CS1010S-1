#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

// Edit your answer here
int sum_n_squares(int n) {
    int counter = 1, result = 0;
    while (counter <= n) {
      result = result + (counter * counter);
      counter ++;
    }
    return result;
}


// main function for your testing. Do not copy into Coursemology
int main(void) 
{
    int out = sum_n_squares(5);  // edit the input to test
    printf("Your function output is: %d\n", out);
}