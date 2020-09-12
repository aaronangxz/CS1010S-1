#include <stdio.h>
#include <math.h>

double taxi_fare(int weekday, int start_time, int speed, int distance) 
{
    printf("Distance: %d\n",distance);
    int weekday_input, start_time_hours, start_time_mins, start_time_secs, total_dist = 0;
    double basefare = 3.40, fare = 0, normalfare = 0.22, surcharge = 0; 
    double speed_per_min = (60.0/speed) * 50;
    double current_time = (double)start_time;
    bool isweekday = false;
    char dayofweek[7][100] = {"Mon", "Tue","Wed","Thu","Fri","Sat","Sun"};
    int dist_count =0;
    
    //Determine day of week base on int input---------------------------------------
    if (weekday < 1 || weekday > 7)
    {
        printf("Invalid day!\n");
    }
    else if (weekday >= 1 || weekday <= 5)
    {
        isweekday = true;
    }
    else
    {
        isweekday = false;
    }
        /*
        weekday = weekday;
        int n = weekday - 1;
        //printf("%s ", dayofweek[n]);
        start_time_hours = start_time / 60;
        start_time_mins = (start_time - (start_time_hours * 60));
        start_time_secs = 00;
        printf("Start: %s %d:%d\n",dayofweek[n],start_time_hours,start_time_mins);
        */
    
    
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

    //Flag down fare / First 1000m --------------------------------------
    if (isweekday && start_time >= 360 && start_time < 540)
    {
        fare += basefare * 1.25;
    }
    else if (start_time >= 0 && start_time < 360)
    {
        fare += basefare * 1.50;
    }
 
    else if (start_time >= 1080 && start_time <= 1439)
    {
        fare += basefare * 1.25;
    }
    else
    {
        fare += basefare; // 0 surcharge
    }
    printf("%f\n",fare);
    distance -= 1000;
    total_dist += 1000;
    current_time += (1000.0 / speed_per_min);
    //-------------------------------------------------------------------------    
    //1000m to 10000m

    while ((distance > 0) && (total_dist < 10000))
    {
        //fare+=69;
        if (isweekday && current_time >= 360 && current_time < 540)
        {
            fare += normalfare * 1.25;
        }
        else if (current_time  >= 0 && current_time  < 360)
        {
            fare += normalfare * 1.50;
        }
        else if (current_time  >= 1080 && current_time  <= 1439)
        {
            fare += normalfare * 1.25;  
        }
        else
        {
            fare += normalfare; // 0 surcharge
        }
        distance -= 400;
        total_dist += 400;
        current_time += (400.0 / speed_per_min);
        //current_time >= 1439? current_time -=1439 : current_time-=0; 
    }

    //Enter loop when distance > 10000
    //Loop until distance is 0
    while (distance > 0)
    {
        if (isweekday && current_time  >= 360 && current_time < 540)
        {
            fare += normalfare * 1.25;
        }
        else if (current_time  >= 0 && current_time  < 360)
        {
            fare += normalfare * 1.50;
        }
        else if (current_time  >= 1080 && current_time  <= 1439)
        {
            fare += normalfare * 1.25;
        }
        else
        {
            fare += normalfare; // 0 surcharge
        }
        distance -= 350;
        total_dist += 350;
        current_time += (350.0 / speed_per_min);
        //current_time >= 1439? current_time -=1439 : current_time-=0; 
    }
    
        printf("%f",fare);

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