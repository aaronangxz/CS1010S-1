#include <stdio.h>
#include <cmath>

using namespace std;

// Edit your answer here
int ip_octet(int b) 
{
     int decimalnum = 0, temp = 0, remainder;
    //Loop through until b is 0
    while (b!=0)
    {
        remainder = b % 10;
        b = b / 10;
        decimalnum = decimalnum + remainder * pow(2,temp);
        //number of loops
        temp++;
    }
    return decimalnum;
}

// main function for your testing. Do not copy into Coursemology
int main(void) 
{
    int out = ip_octet(11001001);  // edit the input to test
    printf("Your function output is: %d\n", out);

    return 0;
}
