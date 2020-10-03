#include <iostream>
#include <limits.h>

using namespace std;

/* Q1A */
int distance(int p, int q) 
{
    int distance = 0;

    while (p > 0)
    {
        int pDigit = p % 10;
        int qDigit = q % 10;

        if (pDigit == qDigit || (pDigit != 0 && qDigit == 0) || (pDigit != 0 && qDigit == 0))
        {
            distance ++;
        }

        p /= 10;
        q /= 10;
    }
    return distance;
}


/* Q1B */
int delta(int p, int q, int d_prime) 
{
    // int value;
    // while (p > 0)
    // {
    //     int value[5] = {};
    //     int pDigit, qDigit;

    //     for (int i = 0; pDigit != 0; i++)
    //     {
    //         pDigit = p % 10;
    //         qDigit = q % 10;
    //         value[i] = qDigit - pDigit;
    //         p /= 10;
    //         q /= 10;
    //     }
    // }


    int value, near, previous = INT_MIN;

    for (int i = INT_MIN ; i <= INT_MAX; i++)
    {
        value = q - i;

        if (q - i == p)
        {
            return i;
        }
        previous = value;
    }
    
}


/* Sample tests */
int main() {
    cout << "distance" << endl;
    cout << distance(12345, 2354) << endl;
    cout << distance(1001, 1231) << endl;

    cout << endl << "delta" << endl;
    cout << delta(12345, 2354, 2) << endl;
    cout << delta(12345, 2354, 1) << endl;
    cout << delta(12345, 2354, 0) << endl;
}