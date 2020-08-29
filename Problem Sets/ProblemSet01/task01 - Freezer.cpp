#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

// Edit your answer here
double freezer(int hrs, int mins, int t0, double c) 
{
  double totaltime = hrs + double(mins) / 60;
  double finaltemp = t0 - (t0 + 10)*(1 -(pow(2.71828,(-c * totaltime))));
  return finaltemp;
}

// main function for your testing. Do not copy into Coursemology
int main(void) 
{
    double out = freezer(1, 30, 27, 1.5);  // edit the input to test
    printf("Your function output is: %f\n", out);
    return 0;
}