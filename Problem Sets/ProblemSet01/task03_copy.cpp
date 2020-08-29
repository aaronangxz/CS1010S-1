#include <stdio.h>
// Edit your answers here

int hrs_elapsed(int h0, int m0, int s0, int h1, int m1, int s1) {
     int secs = (h1*3600 + m1*60 + s1) - (h0*3600 + m0*60 + s0);
    int hours = secs/3600;
    return hours;
}

int mins_elapsed(int h0, int m0, int s0, int h1, int m1, int s1) {
         int minutes1 = m1-m0;
    int minutes = 0;
   if (minutes1 >= 0){
        minutes = minutes1;
      }
    else if (minutes1<0)
    {
        minutes = minutes1+60;
    }
    else
    {
        minutes=0;
    }
        
    return minutes;
}

int secs_elapsed(int h0, int m0, int s0, int h1, int m1, int s1) {
          int seconds1 = s1-s0;
      int seconds = 0;
      if (seconds1 > 0){
        seconds = seconds1;
      }
      else if (seconds1<0)
    {
        seconds = seconds1+60;
    }
    else
    {
        seconds = 0;
    }
        
    return seconds;
}


// main function for your testing. Do not copy into Coursemology
int main(void) {    

    // edit the input to test
    int h = hrs_elapsed(12, 20, 30, 13, 30, 50);
    int m = mins_elapsed(12, 20, 30, 13, 30, 50);
    int s = secs_elapsed(12, 20, 50, 13, 30, 40);

    printf("Your function output is h: %d, m: %d, s: %d\n", h, m, s);
    
    return 0;
}
