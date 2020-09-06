#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int nth_digit(int num, int n) 
{
    if(num > 0 && n > 0)
    {
        //Checks for length of input num
        int length = log10(num) + 1;
        //Array with the size of input length
        int numArray[length];
        //If digits are out of bounds, 
        //e.g. input 5 digit num but asked for 6th digit
        if (num < pow(10,n-1))
        {
            return 0;
        }
        else
        {
            for ( int i = 0; i < length; i++)
            {
                //Insert digits from right to left into array
                //Modulus of input is right most digit
                numArray[i] = int(num % 10);
                //Cut down 1 digit after every loop
                num = num / 10;
            }
            return numArray[length - n];
        }
    }
    else
    {
         //When input is negative
        return 0;
    }   
}
    /*
        In the loop when length = 5:

        i=0,
        numArray[0] = 17263 % 10 = 3
        num = 1726

        i=1,
        numArray[1] = 1726 % 10 = 6
        num = 172

        i=2
        numArray[2] = 172 % 10 = 2
        num = 17

        i=3
        numArray[3] = 17 % 10 = 7
        num = 1

        I = 4
        numArray [4] = 1 % 10 = 1
        num = 0

        numArray {3, 6, 2, 7, 1}
    */
    
    /*---------------------------------------
    if (num < pow(10,n))
    {
        return 0;
    }
    else
    { 
    int a, b;

    a = num / int(pow(10,5-n));
    cout << "a: " << a << endl;
    
    b = int(num / int(pow(10,5-n+1))) * 10;
    cout << "b: " << b << endl;
    
    int number = a - b;
    cout << "num: " << number << endl;
    
    return number;
    }
    */

   /*
    R = 17263 / 10^2 = 172
    R = 172 % 10 = 2 

    17263 / 10^(5-2) = 17263 / 1000 = 17
    17263 / 10^(5-2+1) = 17263 / 10000 * 10= 1.7 * 10 = 10

    10000 / 10^(5-1) = 10000 / 10000 = 1
    10000 / 10^(5-1+1) = 10000 / 100000 = 0

    12345 / 10^(5-3) = 12345 / 100 = 123
    12345 / 10^(5-3+1) = 12345 / 1000 * 10 = 120

    78921 / 10^(5-2) = 78921 / 1000 = 78
    78921 / 10^(5-2+1) = 78921 / 10000 * 10 = 70 

    R = 17263 / 10^2 = 172
    R = 172 % 10 = 2

   --------------------------------------------*/


int main(void) {
    int testcase1 = nth_digit(17263, 2);
    int testcase2 = nth_digit(00000, 1);
    int testcase3 = nth_digit(10000, 1);
    //cout << "Test case 1: " << testcase1 << endl;
    //cout << "Test case 2: " << testcase2 << endl;
    //cout << "Test case 3: " << testcase3 << endl;
    printf("Test case 1: %d\n",testcase1);
    printf("Test case 2: %d\n",testcase2);
    printf("Test case 3: %d\n",testcase3);
    return 0;
}