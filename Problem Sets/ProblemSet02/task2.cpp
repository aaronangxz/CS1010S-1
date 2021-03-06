#include <stdio.h>
#include <math.h>

double taxi_fare(int weekday, int start_time, int speed, int distance) 
{
    printf("Weekday: %d\n",weekday);
    printf("Start Time: %d\n",start_time);
    printf("Speed: %d\n",speed);
    printf("Distance: %d\n",distance);

    int total_dist = 0, dist_count =0;
    double basefare = 3.40, fare = 0, normalfare = 0.22;
    double speed_per_min = (60.0/speed) * 50;
    double current_time = (double)start_time;
    bool isweekday = false;

    //Determine day of week base on int input
    if (weekday < 1 || weekday > 7 || start_time < 0 || start_time > 1439 || speed < 0 || distance < 0)
    {
        printf("Invalid input!\n");
        return false;
    }
    
    if (weekday <= 5)
    {
        isweekday = true;
    }
    else
    {
        isweekday = false;
    }

    //Flag down fare / First 1000m, base fare = $3.40 * surcharge
    //Weekdays, between 06.00am & 08.59am
    if (isweekday && start_time >= 360 && start_time < 540)
    {
        fare += basefare * 1.25;
    }
    //Any day, between 00.00am & 05.59am
    else if (start_time >= 0 && start_time < 360)
    {
        fare += basefare * 1.50;
    }
    //Any day, between 06.00pm & 11.59pm
    else if (start_time >= 1080 && start_time < 1440)
    {
        fare += basefare * 1.25;
    }
    //Normal hours, 0 surcharge
    else
    {
        fare += basefare;
    }
    //Decrement total distance to travel by 1000m, as $3.40 will cover the first 1000m
    distance -= 1000;
    //Total distance travelled as of now
    total_dist += 1000;
    //Current time after travelling 1000m
    current_time += (1000.0 / speed_per_min);
    while (current_time >= 1440)
    {
        current_time = current_time - 1440;
        weekday++;
        if (weekday > 7)
        {
            weekday = 1 ;
        }
    }
    //-------------------------------------------------------------------------    
    
    //1000m to 10000m
    //Loop continously 
    //When there is remaining distance to travel AND
    //When total distance travelled as of now is less than 10000m
    while ((distance > 0) && (total_dist < 10000))
    {
        if (weekday >= 1 && weekday <= 5)
        {
            isweekday = true;
        }
        else
        {
            isweekday = false;
        }
        
        if (isweekday && current_time >= 360 && current_time < 540)
        {
            fare += normalfare * 1.25;
        }
        else if (current_time  >= 0 && current_time  < 360)
        {
            fare += normalfare * 1.50;
        }
        else if (current_time  >= 1080 && current_time  < 1440)
        {
            fare += normalfare * 1.25;  
        }
        else
        {
            fare += normalfare;
        }

        //Decrement total distance to travel by blocks of 400m
        distance -= 400;
        //Total distance travelled as of now, increment by blocks of 400m
        total_dist += 400;
        //Increment current time after every 400m travelled
        current_time += (400.0 / speed_per_min);
        //If current time exceeds 23.59pm, resets back to 00.00am
        while (current_time >= 1440)
        {
            current_time = current_time - 1440;
            weekday++;

            if (weekday > 7)
            {
                weekday = 1 ;
            }
        }
    }
    //-----------------------------------------------------------------------
    //Enter loop when distance > 10000
    //Loop continously until distance to travel is less than 0
    while (distance > 0)
    {
        if (weekday >= 1 && weekday <= 5)
        {
            isweekday = true;
        }
        else
        {
            isweekday = false;
        }
        
        if (isweekday && current_time  >= 360 && current_time < 540)
        {
            fare += normalfare * 1.25;
        }
        else if (current_time  >= 0 && current_time  < 360)
        {
            fare += normalfare * 1.50;
        }
        else if (current_time  >= 1080 && current_time  < 1440)
        {
            fare += normalfare * 1.25;
        }
        else
        {
            fare += normalfare;
        }
        //Decrement total distance to travel by blocks of 350m
        distance -= 350;
        //Total distance travelled as of now, increment by blocks of 350m
        total_dist += 350;
        //Increment current time after every 350m travelled
        current_time += (350.0 / speed_per_min);
        //If current time exceeds 23.59pm, resets back to 00.00am
        while (current_time >= 1440)
        {
            current_time = current_time - 1440;
            weekday++;

            if (weekday > 7)
            {
                weekday = 1 ;
            }
        }
    }
    return fare;
}

int main(void) {
    // You may change the inputs to the function for testing
    double fare = taxi_fare(5, 360, 360, 13000);
    printf("The taxi fare is: $%.3f\n", fare);
    double fare1 = taxi_fare(7, 360, 360, 13000);
    printf("The taxi fare is: $%.3f\n", fare1);
    double fare2 = taxi_fare(1, 5*60 + 50, 6, 15000);
    printf("The taxi fare is: $%.3f\n", fare2);
    return 0;
}