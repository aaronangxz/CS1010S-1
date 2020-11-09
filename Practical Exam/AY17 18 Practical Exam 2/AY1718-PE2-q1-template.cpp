#include <stdio.h>
#include <iostream>
using namespace std;

// Q1a
int best_speed(int start, int end, int max_speed) 
{
    while ((end - start) % max_speed != 0 )
    {
        max_speed --;
    }
    return max_speed;
}


// Q1b
int stopping_distance(int speed) 
{
    int d = 0;
    for (int i = 0; i <= speed; i++)
    {  
        d += i;
    }
    return d;
}


// Q1c
void travel(int start, int end, int max_speed) {
    int count = 0;
    int speed = 0;

    while (start < end)
    {
        cout << count << " " << start << " " <<  speed << endl;   
        start += speed;
        if (speed < max_speed && start + stopping_distance(speed + 1) < end)
        {
            speed++;
        }
        else if (start + stopping_distance(speed) > end)
        {
            speed--;
        }
        count ++;
    }
    cout << count << " " << start << " " <<  speed << endl;   
}


int main(void) {
    // printf("%d\n", best_speed(44, 89, 4));
    // printf("%d\n", best_speed(44, 89, 5));
    // printf("%d\n", best_speed(44, 89, 10));

    // printf("%d\n", stopping_distance(6));
    // printf("%d\n", stopping_distance(7));

    // travel(44, 89, 5);
    travel(44, 89, 10);
    // travel(44, 89, 4);
}