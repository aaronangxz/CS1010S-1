#include <stdio.h>
#include <math.h>

int print_10_to_b(int n, int b) 
{
    int converted[50];
    int i = 0;

    while ( n != 0)
    {
        converted[i] = n % b;
        n = n / b;
        i ++ ;
    }
    i --;
    
    for(  ; i >= 0; i--)
    {
	    printf("%d",converted[i]);
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
        int remainder = n % 10;
        n = n / 10;
        sum += remainder * pow(b1,i);
        i++ ;

        /* 
        Computation steps i.e. 
        Convert 130 base 5 to base 10

        i = 0
        130 % 10 = 0
        n = 130 / 10 = 13
        sum = 0 * 5^0

        i = 1
        13 % 10 = 3
        N = 13 / 10 =1
        sum = 0 * 5^0 + 3 * 5^1

        i = 2
        1 % 10 = 1
        n = 1 / 10 = 0
        sum = 0 * 5^0 + 3 * 5^1+ 1 * 5^2

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