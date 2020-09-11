#include <stdio.h>
#include <math.h>

double taxi_fare(int weekday, int start_time, int speed, int distance) 
{
    printf("Distance: %d\n",distance);
    int weekday_input, start_time_hours, start_time_mins, start_time_secs, dist_elapsed = 0,time_elapsed=0, dist_remain = 0;
    double base_fare = 3.40, fare = 0, surcharge = 0;
    char dayofweek[7][100] = {"Mon", "Tue","Wed","Thu","Fri","Sat","Sun"};
    int dist_count =0;
    //Determine day of week base on int input---------------------------------------
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
    //------------------------------------------------------------------------------

    /*
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
        while (distance > 1000)
            {
                distance -= 400;
                fare += 0.22;
                printf("Fare is : %f\n",fare);
            } 
            fare = fare + base_fare;
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
            while (distance > 10000)
            {
                distance -= 350;
                fare += 0.22;
                printf("Fare is : %f\n",fare);
            } 
            fare = fare + base_fare;
        }
    }
    */

    //Compute surcharge base on start time--------------------------------------
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
    //-------------------------------------------------------------------------
    
    
    //When distance is less than & equals to 1000m
    while (dist_count < distance)
    {
       dist_count += 500;
        if (dist_count <= 1000)
        {
            fare = 3.40;
        }
        else if (dist_count > 1000 && dist_count <= 10000)
        {
            fare ;
        }
    }
   
    
    

    return fare;
}

int main(void) {
    // You may change the inputs to the function for testing
    //double fare = taxi_fare(1, 17*60 + 59, 6, 1000);
    double fare1 = taxi_fare(1, 5*60 + 50, 6, 15000);
    //printf("\nThe taxi fare is: $%.3f", fare);
    printf("\nThe taxi fare is: $%.3f", fare1);
    return 0;

}