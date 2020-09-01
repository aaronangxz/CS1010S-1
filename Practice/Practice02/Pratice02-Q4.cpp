#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int uber_fare(int distance) {
    double fare;
    if (distance <= 1000)
    {
        fare = 240;
    }
    else if (distance > 1000 && distance <= 10000)
    {
        if ((distance - 1000) / 200 < 1)
        {
            fare = 240 + 10;
        }
        else
        {
            fare = 240 + (((distance - 1000) / 200) * 10.0);
        }    
    }
    else if (distance > 10000)
    {
        if ((distance - 10000) / 150 < 1)
        {
            fare = 240 + 500 + 10;
        }
        else
        {
            fare =  240 + 450 + (round((distance - 10000) / 150.0) * 10);
        }    
    }
    return fare;
}


int main(void) {
    int testcase1 = uber_fare(600);
    int testcase2 = uber_fare(3800);
    int testcase3 = uber_fare(17600);

    printf("Test case 1: %d\n", testcase1);
    printf("Test case 2: %d\n", testcase2);
    printf("Test case 3: %d\n", testcase3);
}