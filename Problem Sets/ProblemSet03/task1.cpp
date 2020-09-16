#include <iostream>

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

long factoriallong(int n) 
{
    long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
   // cout << "Factorial: " << factorial << endl;
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


/* d. 
Are you able to make use of the factorial function in choose? Explain why.
(Put your answer within the comments)
Answer: 
Yes, as n choose k = n! / (k!(n-k)!)

*/


// e. 
void pascal_triangle(int row) 
{
    int digits = row  ;
    for ( int i = 0; i <= digits; i++)
    {
        int number = choose(row,i);
        cout << number << " ";
    }
    // for ( int i = digits + 1; i >= 0; i--)
    // {
    //     int number = choose(row,i);
    //     cout << number << " ";
    // }
    
}

int main (void)
{
    pascal_triangle(15); 
}