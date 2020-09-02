#include <iostream>
#include <stdbool.h>
#include <math.h>
using namespace std;

int nth_digit(int num, int n) 
{
    int length = log10(num) + 1;
    int numArray [length];
    
    if (num < pow(10,n))
    {
        return 0;
    }
    else
    {
        for ( int i = 0; i < length; i++)
        {
            numArray [i] = int(num % 10);
            num = num / 10;
            cout << "Array is " << numArray[i] << endl;
        }
        return numArray[length - n];
    }
    
    //return int(num / int(pow(10, (floor(log10(num)) - n)))) % 10;
    
    /*
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
}

int main(void) {
    int testcase1 = nth_digit(17263, 2);
    int testcase2 = nth_digit(17263, 6);
    int testcase3 = nth_digit(10000, 1);
    cout << "Test case 1: " << testcase1 << endl;
    cout << "Test case 2: " << testcase2 << endl;
    cout << "Test case 3: " << testcase3 << endl;
    return 0;
}