/*
Define a function void init_primes(bool primes[], int n) that takes in the array primes together together with an integer n, and initialize the representation of all the numbers from 2 to n to be prime. That is to say, since no sieve is performed yet, we assume all numbers to be primes in the beginning.

Define a function void sieve_primes(bool primes[], int size, int n) that takes rray primes and two integers max and n, and performs the sieve as described above with n up to and including max, i.e., it "crosses out" all multiples of n.

Define the function print_primes(int n) which takes in an integer n (n > 1) and prints a list of prime numbers from 2 to n inclusive.
Within this function, you should declare a boolean array primes that is suitably sized to accommodate numbers up to and including the input n, and use the above-defined functions to achieve the task.

For example, calling print_primes(50) will result in the output:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
*/

#include <iostream>

using namespace std;
 
void init_primes(bool primes[], int n) 
{
    //Initialize array with 'True'
    for (int i = 2; i <= n; i++)
    {
        primes[i] = true;
    }
}

void sieve_primes(bool primes[], int size, int n) 
{
    //Flag as false if array location is the multiple of n
    //Starts from n + 1, ignoring n itself
    //Check from n + 1 to the total number of numbers
    for (int i = n + 1  ; i <= size; i++)
    {
        if (i % n == 0)
        {
            primes[i] = false;
        }
    }
}

void print_primes(int n) 
{
    //Declare array, with data type bool
    bool primes[n];

    //Call init_primes function to initialize array into all 'True'
    init_primes(primes, n);

    //Begin checking number via sieve_primes function
    //Numbers from 2 to n will be passed through and changes will be reflected in primes[] array
    for (int i = 2; i <= n; i++)
    {
        //Only enter loop when flag is 'true', else skip
        if (primes[i])
        {
            //Check values via sieve_primes
            sieve_primes(primes,n,i);
            //Print out array
            printf("%d ",i);
        }
    }   
}

int main(void) 
{
    bool primes[50];
    sieve_primes(primes, 50, 2);
    sieve_primes(primes, 50, 3);
    sieve_primes(primes, 50, 4);
    sieve_primes(primes, 50, 7);
    print_primes(50);
}