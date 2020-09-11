#include <stdio.h>
#include <math.h>

int print_10_to_b(int n, int b) 
{
    //Convert number in base b to base 10
    //Array for converted numbers
    int convert[50];
    int i = 0;

    //Loop until n is 0 
    while ( n != 0)
    {
        //Fill the ith location in array (Starts from 0) with remainder of n / base
        //Essentially the last digit of n        
        convert[i] = n % b;
        //Removing the last digit of n in every iteration
        n = n / b;
        i ++ ;

        /*
        ----- Start of loop -----

        i = 0
        convert[0] = 130 % 5 = 0
        n = 130 / 5 = 26

        i = 1
        convert[1] = 26 % 5 = 1
        n = 26 / 5 = 5

        i = 2
        convert[2] = 5 % 5 = 0
        n = 5 / 5 = 1

        i = 3
        convert[3] = 1 % 5 = 1
        n = 1 / 5 = 0

        i = 4
        ----- End of loop -----     

        Values in array --> convert[] = {0,1,0,1} 

        */
    }
    //Going back one position as this position in array --> convert[4] (empty) is not relevant
    // i = 4 - 1, so i goes back to 3 which is convert[3]
    i--;
    
    //Start reverse looping from previous position of array (convert[3]), until i is < 0
    for( i = i ; i >= 0; i--)
    {
	    printf("%d",convert[i]);

        /*

        ----- Start of loop -----
        i = 3, return convert[3], prints 1
        i = 2, return convert[2], prints 0
        i = 1, return convert[1], prints 1
        i = 0, return convert[0], prints 0
        ----- End of loop -----

        Result of print_10_to_b(130, 5) --> 1010

        */
    }
    printf("\n");
    return 0;
}

int print_b1_to_b2(int n, int b1, int b2) 
{
    // Convert n from base b1 to base 10, 
    // then sub returned values (sum) to <print_10_to_b> function
    int i = 0, sum = 0;
    
    while ( n!= 0)
    {
        // Similar to <print_10_to_b> function
        int remainder = n % 10;
        n = n / 10;
        //Each digit * base^corresponding power
        sum += remainder * pow(b1,i);
        i++ ;

        /* 
        Computation steps i.e. 
        Convert 130 base 5 to base 10

        ----- Start of loop -----
        i = 0
        remainder = 130 % 10 = 0
        n = 130 / 10 = 13
        sum = 0 * 5^0

        i = 1
        remainder = 13 % 10 = 3
        N = 13 / 10 =1
        sum = 0 * 5^0 + 3 * 5^1

        i = 2
        remainder = 1 % 10 = 1
        n = 1 / 10 = 0
        sum = 0 * 5^0 + 3 * 5^1+ 1 * 5^2
        ----- End of loop -----

        */
    }
    print_10_to_b(sum,b2);
    return 0;
}

int main (void)
{
    printf("Testcase 1: ");
    int testcase1 = print_10_to_b(130, 5);
    printf("Testcase 2: ");
    int testcase2 = print_10_to_b(255, 2);
    printf("Testcase 3: ");
    int testcase3 = print_10_to_b(280, 8);
    printf("Testcase 4: ");
    int testcase4 = print_b1_to_b2(130, 5, 7);
    printf("Testcase 5: ");
    int testcase5 = print_b1_to_b2(10101010, 2, 10);
}