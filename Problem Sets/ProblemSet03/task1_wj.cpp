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
    int r = n - k;
    double fact = 1;
    int output = 0;
    // printf("n is %d, k is %d, r is %d, \n", n, k, r);

    for (int i = n; i >=1 ; i--)
    {
        double a=1.0, b=1.0, c = 1.0;
        if (n >= i) a = i;
        if (k >= i) b = i;
        if (r >= i) c = i;
        //printf("fact is %lu, a is %d, b is %d, c is %d \n", fact, a, b, c);
        //printf("%f *= %f / (%f * %f)\n", fact, a, b, c);
        fact *= a / (b * c);
    }
    output = fact;
    //printf("%dC%d = %lu" ,n , k, output);
    return output;
}

/* d. 
Are you able to make use of the factorial function in choose? Explain why.
(Put your answer within the comments)
Answer: 
No, as n choose k = n! / (k!(n-k)!)
*/

// e. 
void pascal_triangle(int row) 
{
    int digits = row ;
    for ( int i = 0; i <= digits; i++)
    {
        unsigned long number = choose(row,i);
        printf("%lu ",number);
    }
    // for ( int i = digits + 1; i >= 0; i--)
    // {
    //     int number = choose(row,i);
    //     cout << number << " ";
    // }
}

int main (void)
{
    pascal_triangle(100); 
}