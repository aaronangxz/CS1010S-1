#include <stdio.h>

//Using for loop
int gcd_loop(int a, int b) 
{
    int gcd;
    
    for(int i= 1 ; i <= a && i <=b ;i++)
    {
       if (a%i == 0 && b%i==0)
       gcd = i;
    }
    return gcd;
}

//Using Recursion
int gcd_rec(int a, int b) 
{
    // Loop until b is 0//
    if (b != 0)
    {
        //*Recursion*//
        //Replace b with remainder of a%b//
        //Replace a with original value of b//
        return gcd_loop(b,a%b);
    }
    else
    {
        //If b=0, a is the gcd results
        return a;
    }
}


int main(void) 
{
int out = gcd_loop(539,84);
int out1 = gcd_rec(539,84);

printf("For loop results: %d\n",out);
printf("Recursion results: %d",out1);

}