#include <stdio.h>
#include <math.h>

double taxi_fare(int weekday, int start_time, int speed, int distance) 
{
    printf("Distance: %d\n",distance);
    int weekday_input, start_time_hours, start_time_mins, start_time_secs, dist_elapsed = 0,time_elapsed ;
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
        start_time_secs = 00;
        printf("Start: %s %d:%d\n",dayofweek[n],start_time_hours,start_time_mins);
    }
    
   if (distance <= 1000)
    {
        base_fare = 3.40;
    }
    else if (distance > 1000 && distance <= 10000)
    {
        if ((distance - 1000) / 400 < 1)
        {
            base_fare = 3.40 + 0.22;
        }
        else
        {
            base_fare = 3.40 + (((distance - 1000) / 400) * 0.22);
        }    
    }
    else if (distance > 10000)
    {
        if ((distance - 10000) / 350 < 1)
        {
            base_fare = 3.40 + 5.50 + 0.22;
        }
        else
        {
            base_fare =  3.40 + 5.50 + (round((distance - 10000) / 350.0) * 0.22);
        }    
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
    printf("The Surcharge is x %.3f\n",surcharge);

    //Flag down fare
    fare = base_fare * surcharge;
    
    dist_elapsed += 1000;
    
    dist_remain = distance - dist_elapsed;
    
    time_elapsed = start_time + (dist_elapsed / 500); 
    
    printf("Distance elapsed: %d\n",dist_elapsed);
    printf("Current fare: $%.3f\n",fare);
    printf("Distance remaining: %.0f\n",dist_remain);
    printf("Time elapsed: %d\n",time_elapsed);
    


    return fare;
}

int main(void) {
    // You may change the inputs to the function for testing
    //double fare = taxi_fare(1, 17*60 + 59, 6, 1000);
    double fare1 = taxi_fare(1, 17*60 + 57, 6, 2000);
    //printf("\nThe taxi fare is: $%.3f", fare);
    printf("\nThe taxi fare is: $%.3f", fare1);
    return 0;

}