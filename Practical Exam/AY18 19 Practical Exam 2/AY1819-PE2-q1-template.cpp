#include <stdio.h>
#include <iostream>

using namespace std;

int distance(int num, int capacity, int delay, int t) 
{
    int speed = 0, dist = 0, engineOn = 0,engineOff = 0;

    for (int i = 0; i <= t; i++)
    {
        dist += speed;
        if ((delay % i == 0) && engineOn < num)
        {
            engineOn++;
        }
        if (i >= capacity && engineOff < num )
        {
            engineOff++;
        }
        speed += engineOn - engineOff;
    }
    
    
    return dist;
    
}

int main() {
    cout << distance(1, 20, 1, 10) << endl; // n=1, c>t
    cout << distance(1, 5, 1, 10) << endl; // n=1
    cout << distance(3, 20, 1, 7) << endl; // c>t,d=1
    cout << distance(3, 5, 1, 7) << endl; // d=1
    cout << distance(3, 5, 2, 8) << endl; 
}