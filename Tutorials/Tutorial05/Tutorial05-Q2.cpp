#include <iostream>

using namespace std;
 
void init_primes(bool primes[], int n) 
{
    for (int i = 2; i <= n; i++)
    {
        primes[i] = true;
    }
}

void sieve_primes(bool primes[], int size, int n) 
{
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
    bool primes[n];
    init_primes(primes, n);
    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
        {
            sieve_primes(primes,n,i);
        }
    }   
    for(int i = 0 ;  i < 50 ; i ++)
    {
        if (primes[i])
        {
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