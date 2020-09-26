/*************************
 * Problem Set 3: Task 2 *
 *************************
 
Make sure you have answered ALL 
the questions in this task.   */

#include <stdio.h>
#include<iostream>
#include <math.h>

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
    //Calculate total days since 01/01/01
    for (int i = 1; i < year; i++)
    {
        //Plus 366 if it's leap year, 365 otherwise
        if (is_leap_year(i))
        {
            daysum += 366;
        }
        else
        {
            daysum += 365;
        }
    }

    //If it is January, only add in the day, since it is not necessary to add the whole month
    if (month == 1)
    {
        daysum += day;
    }
    else
    {
        //Add (month-1) * days
        for (int i = 1; i < month ; i++)
        {
            daysum += days_in_month(i, year); 
        }
        //Add in the remaining days
        daysum += day;
    }
    //Minus the day of Epoch since 01/01/01
    daysum -= 719163;
    return daysum;
}

// d.
int day_of_week(int day, int month, int year) 
{
    //Compute number of days since Epoch
    int days = days_from_epoch(day,month,year);
    cout << "Days (epoch) is " << days << endl;
    //If results for epoch is negative, we have to obtain the day of week backwards from 01/01/1970
    //Since 01/01/1970 is 4, 1 day lesser than Epoch is 3, etc.
    if (days < 0)
    {
        days = abs(days) ; 
        cout << "Days (abs) is " << days << endl;
        int day_week[7] = {4,3,2,1,0,6,5};
        for (int i = 6; i >= 0; i--)
        {
            if (days % 7 == i)
            {
                return day_week[i];
            }
            printf("Day is %d\n",day_week[i]);
        }
    }
    
    //Initialize array:
    //Since Epoch is Thursday, if days % 7 is 0, it is Thursday
    //Hence day_week[0] is Thursday
    //int day_week[7] = {4,5,6,7,1,2,3};
    else
    {
        int day_week[7] = {4,5,6,0,1,2,3};
        for (int i = 0; i <= 7; i++)
        {
            if (days % 7 == i)
            {
                return day_week[i];
            }
            printf("Day is %d\n",day_week[i]);
        }
    }
}    

// e. 
void display_month(int month, int year) {
    
    //Compute total days in the month
    int days = days_in_month(month,year);
    //Compute week of first day
    int week = day_of_week(1,month,year);
    cout << "Week of 1st is "<< week << endl;
    //Week header
    cout << "  S  M  T  W  T  F  S" << endl;
    //Fill in spaces until the first day of the month
    int space_for_firstday;
    for (space_for_firstday = 0; space_for_firstday < week; space_for_firstday++)
    {
        cout << "   " ;
    }
    
    //Starts to print from first day onwards
    for (int print_days = 1; print_days <= days; print_days++) 
    { 
        printf("%3d", print_days); 
        //When day exceeds the right most (Saturday), resets to Sunday and add in new line
        if (++space_for_firstday > 6) 
        { 
            space_for_firstday = 0; 
            cout << endl; 
        } 
    } 
}

int main(void)
{
    bool test = is_leap_year(2012);
    cout << "Leap year? " << test << endl;
    bool test2 = is_leap_year(2100);
    cout << "Leap year? " << test2 << endl;
    bool test3 = is_leap_year(2017);
    cout << "Leap year? " << test3 << endl;
    int test4 = days_in_month(9, 2017);
    cout << "There are " << test4 << " days." << endl;
    int test5 = days_in_month(2,2000);
    cout << "There are " << test5 << " days." << endl;
    int test6 = days_from_epoch(10, 1, 1970);
    cout << "Days from Epoch: " << test2 << endl;
    int test7 = days_from_epoch(7, 9, 2017);
    cout << "Days from Epoch: " << test7 << endl;
    int test8 = days_from_epoch(25, 12, 1969);
    cout << "Days from Epoch: " << test8 << endl;
    int test9 = day_of_week(25, 12, 1969);
    cout << "Day of week: " << test9 << endl;
    int test10 = day_of_week(9, 9, 2017);
    cout << "Day of week: " << test10 << endl;
    display_month(9, 2017);
    cout << endl;
    display_month(12,1969);
}


//Problem:

//1969 calender is wrong