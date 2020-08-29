#include <stdio.h>
// Edit your answers here

int hrs_elapsed(int h0, int m0, int s0, int h1, int m1, int s1) 
    {
    int hours = h1 - h0;
        //When difference between hours is 0
        //Doesn't change value even if end minutes is smaller than start minutes
        if (hours == 0)
        {
            hours = 0;
        }
        //When end minute is smaller than start minute
        //minus 1 hour from total hours
        else if (m1 < m0)
        {
            hours --;
        }
        else
        {
            hours = hours;
        }
    
    return hours;
    }

int mins_elapsed(int h0, int m0, int s0, int h1, int m1, int s1) 
    {
    int minutes = m1 - m0;
        //When end seconds is smaller or equals to start seconds
        //minus 1 minute from total minutes
        if (s1<=s0)
        {
            minutes -- ;
        }
        //When end minutes is smaller than start minutes
        //Add 60 to make it positive
        if (m1<m0)
        {
            minutes = minutes + 60;
        }
        else
        {
            minutes = minutes;
        }
    
    return minutes;
    }

int secs_elapsed(int h0, int m0, int s0, int h1, int m1, int s1) 
    {
    int seconds = s1 - s0;
        //When end seconds is smaller than start seconds 
        //Add 60 to make it positive
        if (seconds < 0)
    {
        seconds = seconds + 60;
    }
        else
    {
        seconds = seconds;
    }

    return seconds;
    }

// main function for your testing. Do not copy into Coursemology
int main(void) 
{    
    // edit the input to test
    int h = hrs_elapsed(00, 20, 50, 00, 40, 30);
    int m = mins_elapsed(00, 20, 50, 00, 40, 30);
    int s = secs_elapsed(00, 20, 50, 00, 40, 30);

    printf("Your function output is h: %d, m: %d, s: %d\n", h, m, s);
    
    return 0;
}
