#include <stdio.h>
#include <iostream>

int distance(int num, int capacity, int delay, int t) 
{
    int speed = 0, dist = 0, time = 0;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < capacity; j++)
        {
            time ++;
            if (time == delay)
            {
                /* code */
            }
            
        }
    }
    
    
    
    
    
    
}

int main() {
    cout << distance(1, 20, 1, 10) << endl; // n=1, c>t
    cout << distance(1, 5, 1, 10) << endl; // n=1
    cout << distance(3, 20, 1, 7) << endl; // c>t,d=1
    cout << distance(3, 5, 1, 7) << endl; // d=1
    cout << distance(3, 5, 2, 8) << endl; 
}