#include <stdio.h>
#include<iostream>
#include <math.h>

using namespace std;

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

void greg_to_mayan(int day, int month, int year) 
{
    const int Daysof2012 = 1872000; //Total days up till 21/12/2020
    int daysDiff;
    int kin = 0, winal = 0, tun = 0, katun = 0, baktun = 0;
    int remainder = 0;
    
    if (days_from_epoch(day,month,year) < 15695 )
    {
        cout << "Epoch is " << days_from_epoch(day,month,year) << endl;
        daysDiff =  Daysof2012 - (15695 - days_from_epoch(day,month,year));
            cout << "DaysDiff is " << daysDiff << endl ;
        baktun = daysDiff / 144000;
        remainder = daysDiff % 144000;
            cout << "Baktun is " << baktun << endl;
            cout << "Remaining: " << remainder << endl;
        katun = (remainder/ 7200);
        remainder = remainder % 7200;
            cout << "Katun is "<<katun << endl;
            cout << "Remaining: " << remainder << endl;
        tun = (remainder / 360);
        remainder = remainder % 360;
            cout << "Tun is "<< tun << endl;
            cout << "Remaining: " << remainder << endl;        
        winal = (remainder / 20);
        remainder = remainder % 20;
            cout << "Winal is "<< tun << endl;
            cout << "Remaining: " << remainder << endl;         
        kin = remainder;
            cout << "Kin is "<< tun << endl;
            cout << baktun << "." << katun << "." << tun << "." << winal << "." << kin << endl;
    }
    else if (days_from_epoch(day,month,year) > 15695 )
    {
        cout << "Epoch is " << days_from_epoch(day,month,year) << endl;
        daysDiff =  Daysof2012 + (days_from_epoch(day,month,year) - 15695);
            cout << "DaysDiff is " << daysDiff << endl ;
        baktun = daysDiff / 144000;
        remainder = daysDiff % 144000;
            cout << "Baktun is " << baktun << endl;
            cout << "Remaining: " << remainder << endl;
        katun = (remainder/ 7200);
        remainder = remainder % 7200;
            cout << "Katun is "<<katun << endl;
            cout << "Remaining: " << remainder << endl;
        tun = (remainder / 360);
        remainder = remainder % 360;
            cout << "Tun is "<< tun << endl;
            cout << "Remaining: " << remainder << endl;        
        winal = (remainder / 20);
        remainder = remainder % 20;
            cout << "Winal is "<< tun << endl;
            cout << "Remaining: " << remainder << endl;     
        kin = remainder;
            cout << "Kin is "<< tun << endl;
            cout << baktun << "." << katun << "." << tun << "." << winal << "." << kin << endl;
    }
    else
    {
            cout << "13.0.0.0.0" << endl;
    }
}

void mayan_to_greg(int baktun, int katun, int tun, int uinal, int kin) 
{
    const int Daysof2012 = 1872000; //Total days up till 21/12/2020  
    int epochDay;   
    int day = 21, month = 12, year = 2012;
    int totalDays = (baktun * 144000) + (katun * 7200) + (tun * 360) + (uinal * 20) + kin;
        cout << "Total days is " << totalDays << endl;

    if (totalDays > Daysof2012)
    {
        int DaysDiff = totalDays - Daysof2012;
            cout << "Difference in days is " << DaysDiff << endl;

        while (DaysDiff != 0)
        {
            day ++;
            if (day > days_in_month(month,year))
            {
                month += 1;
                day = 1;
            }
            if (month > 12)
            {
                year ++;
                month = 1;
            }
            DaysDiff --;
        }
        cout << day << "/" << month << "/" << year << endl;
    }
    else if (totalDays < Daysof2012)
    {
        int DaysDiff = Daysof2012 - totalDays;
            cout << "Difference in days is " << DaysDiff << endl;

        while (DaysDiff != 0)
        {
            day --;
            if (day == 0)
            {
                month --;
                day = days_in_month(month,year);
            }
            if (month == 0)
            {
                year --;
                month = 12;
            }
            DaysDiff --;
        }
        cout << day << "/" << month << "/" << year << endl;
    }
    else
    {
        cout << "21/12/2012" << endl;
    }
}

int main(void) 
{
    greg_to_mayan(21, 12, 2012);
    mayan_to_greg(12, 16, 18, 16, 18);
    return 0;
}