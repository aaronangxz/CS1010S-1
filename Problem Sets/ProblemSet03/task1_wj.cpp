#include <iostream>
#include <math.h>
using namespace std;

/*************************
 * Problem Set 3: Task 1 *
 *************************
 
Make sure you have answered ALL 
the questions in this task.   */

#include <stdio.h>

// a.
int factorial(int n) 
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
   // cout << "Factorial: " << factorial << endl;
    return factorial;
}

unsigned long factoriallong(int n) 
{
    unsigned long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
   //cout << "Factorial: " << factorial << endl;
    return factorial;
}

/* b. 
What happens to your function when n >= 13? Explain why.
(Put your answer within the comments)
Answer: 

When n >= 13, value of n! will be out of int's scope.
*/

// c.
int choose(int n, int k) 
{
    int choose = factoriallong(n) / (factoriallong(k) * factoriallong(n-k));
    return choose;
}

int choose_alt(int n, int k) 
{
    //Because nCk = n! / k!(n-k)! = n! / k!r!
    int r = n - k;
    double fact = 1;
    int output = 0;
    // printf("n is %d, k is %d, r is %d, \n", n, k, r);

    //
    for (int i = n; i >=1 ; i--)
    {
        double a = 1.0, b = 1.0, c = 1.0;
        if (n >= i) a = i;
        if (k >= i) b = i;
        if (r >= i) c = i;
        //printf("fact is %lu, a is %d, b is %d, c is %d \n", fact, a, b, c);
        printf("%f *= %f / (%f * %f)\n", fact, a, b, c);
        fact *= a / (b * c);
    }
    output = fact;
    //printf("%dC%d = %d" ,n , k, output);
    return output;
}

/* d. 
Are you able to make use of the factorial function in choose? Explain why.
(Put your answer within the comments)
Answer: 
No, as n choose k = n! / (k!(n-k)!) will return an excessively large number which exceeds the scope of integer.
*/

// e. 
void pascal_triangle(int row) 
{
    int digits = row ;
    for (int i = 0; i <= digits; i++)
    {
        unsigned long number = choose_alt(row,i);
        printf("%lu ",number);
    }
}

int main (void)
{
    // int testcase1 = factorial(5);
    // cout << "Test Case 1 : " << testcase1 << endl;
    // int testcase2 = choose(8,5);
    // cout << "Test Case 2 : " << testcase2 << endl;
    // int testcase3 = choose(13, 2);
    // cout << "Test Case 3 : " << testcase3 << endl;
    pascal_triangle(15); 
}