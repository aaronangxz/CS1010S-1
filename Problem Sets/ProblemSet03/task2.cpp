/*************************
 * Problem Set 3: Task 2 *
 *************************
 
Make sure you have answered ALL 
the questions in this task.   */

#include <stdio.h>
#include<iostream>

using namespace std;

// a.
bool is_leap_year(int year) 
{
    if (year % 4 == 0)
    {
        //A leap year is every 4 years, but not every 100 years, then again every 400 years.
        if (year % 100 == 0 && year % 400 != 0)
        {
            return false;
        }
        return true;
    }
    else
    {
        return false;
    }
}

// b. 
int days_in_month(int month, int year) 
{
    //Leap year February
    if (month == 2 && is_leap_year(year))
    {
        return 29;
    }
    //Non leap year February
    else if (month == 2 && is_leap_year(year)== 0)
    {
        return 28;
    }
    //Months with 31 days
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    else
    {
        return 30;
    }
}

// c.
int days_from_epoch(int day, int month, int year) 
{
    int daysum = 0;

    for (int i = 1; i < year; i++)
    {
        if (is_leap_year(i))
        {
            daysum += 366;
            //cout << "Year " << i <<" is leap year" << endl;
        }
        else
        {
            daysum += 365;
            //cout << "Year " << i <<" is not leap year" << endl;
        }
    }
    //cout << "Current Day (Year): " << daysum << endl;

    if (month == 1)
    {
        daysum += day;
    }
    else
    {
        for (int i = 1; i < month ; i++)
        {
            daysum += days_in_month(i, year); 
        }
        daysum += day;
    }
    //cout << "2. Current Day: " << daysum << endl;
    
    daysum -= 719163;
    return daysum;
}


// d.
int day_of_week(int day, int month, int year) {
    //Compute number of days since Epoch
    int days = days_from_epoch(day,month,year);
    //Initialize array:
    //Since Epoch is Thursday, if days % 7 is 0, it is Thursday
    //Hence day_week[0] is Thursday
    int day_week[7] = {4,5,6,7,1,2,3};
   
    for (int i = 0; i < 7; i++)
    {
        if (days % 7 == i)
        {
            return day_week[i];
        }
    }
}    

// e. 
void display_month(int month, int year) {
    //Week header
    cout << "  S  M  T  W  T  F  S" << endl;
    //Compute total days in the month
    int days = days_in_month(month,year);
    //Compute week of first day
    int week = day_of_week(1,month,year);
    
    //Fill in spaces until the first day of the month
    int space_for_firstday;
    for (space_for_firstday = 0; space_for_firstday < week; space_for_firstday++)
    {
        cout << "   " ;
    }
    
    //Starts to print from first day onwards
    for (int print_days = 1; print_days <= days; print_days++) { 
            printf("%3d", print_days); 
            //When day exceeds the left most (Saturday), resets to Sunday and add in new line
            if (++space_for_firstday > 6) { 
                space_for_firstday = 0; 
                printf("\n"); 
            } 
        } 
}

int main(void)
{
    // bool test = is_leap_year(2100);
    // cout << "Leap year? " << test << endl;
    // int test1 = days_in_month(2,2000);
    // cout << "There are " << test1 << " days." << endl;
    // int test2 = days_from_epoch(10, 1, 1970)	;
    // cout << "Epoch: " << test2 << endl;
    // int test3 = day_of_week(1, 1, 1970)	;
    // cout << "Day of week: " << test3 << endl;

}