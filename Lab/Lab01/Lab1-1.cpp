#include <stdio.h>

int candles(int n, int k) 
{
    // Your solution here
    int totalcandles = 0;
    int group = 0;

    while (n > 0)
    {
        n --; // burn one candle
        totalcandles ++; // add one candle to burn
        group ++; // count current candle burnt

        if (group == k)
        {
            n ++; // add one candle to hand
            group = 0;
        }
    }
    return totalcandles;
}



int main(void) 
{
    int out = candles(5,3);  // edit the input to test
    int out1 = candles(6,4);
    int out2 = candles(6,2);
    printf("Ans1: %d\n", out);
    printf("Ans2: %d\n", out1);
    printf("Ans3: %d\n", out2);

}