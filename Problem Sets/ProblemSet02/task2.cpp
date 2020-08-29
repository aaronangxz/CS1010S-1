#include <stdio.h>

double taxi_fare(int weekday, int start_time, int speed, int distance) 
{
    int weekday_input, start_time_hours, start_time_mins, start_time_secs, dist_elapsed = 0 ;
    double base_fare = 3.40, fare = 0, surcharge = 0, dist_remain = 0;
    char dayofweek[7][100] = {"Mon", "Tue","Wed","Thu","Fri","Sat","Sun"};
    if (weekday < 1 || weekday > 7)
    {
        printf("Invalid day!\n");
    }
    else
    {
        weekday = weekday;
        int n = weekday - 1;
        //printf("%s ", dayofweek[n]);

        start_time_hours = start_time / 60;
        start_time_mins = (start_time - (start_time_hours * 60));
        start_time_secs = 0;
        printf("Start: %s %d:%d:%d\n",dayofweek[n],start_time_hours,start_time_mins,start_time_secs);
    }
    
   

    //Compute surcharge base on start time
    if (weekday >= 1 && weekday <= 5 && start_time >= 360 && start_time <= 539)
    {
        surcharge = 1.25;
    }
    else if (start_time >= 0 && start_time <= 359)
    {
        surcharge = 1.50;
    }
 
    else if (start_time >= 1080 && start_time <= 1439)
    {
        surcharge = 1.25;
    }
    else
    {
        surcharge = 1.0; // 0 surcharge
    }
    printf("The Surcharge is $%.3f\n",surcharge);

    //Flag down fare
    fare = base_fare * surcharge;
    dist_elapsed += 1000;
    dist_remain = distance - dist_elapsed;
    printf("Distance: %d\n",dist_elapsed);
}

int main(void) {
    // You may change the inputs to the function for testing
    double fare = taxi_fare(8, 10*60 + 30, 30, 15000);
    printf("The taxi fare is: $%.3f", fare);
    return 0;

}