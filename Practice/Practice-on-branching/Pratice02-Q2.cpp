#include <stdbool.h>
#include <stdio.h>

bool is_leap_year(int year) 
{
    if (year % 4 ==0)
    {
        
        if (year % 400 == 0)
        {
            return 1;
        }
        else if (year % 100 == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
       return 0; 
    }
    else
    {
        return 0;
    }
    
}

int main(void) {
    int testcase1 = is_leap_year(2104);
    int testcase2 = is_leap_year(2100);
    int testcase3 = is_leap_year(2014);
    int testcase4 = is_leap_year(2000);
    printf("Test case 1: %d\n", testcase1);
    printf("Test case 2: %d\n", testcase2);
    printf("Test case 3: %d\n", testcase3);
    printf("Test case 4: %d\n", testcase4);

 
}