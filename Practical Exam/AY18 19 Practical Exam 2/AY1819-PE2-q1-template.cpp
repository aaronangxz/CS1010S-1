#include <stdio.h>
#include <iostream>

int distance(int num, int capacity, int delay, int t) {
    // your code here
}

int main() {
    cout << distance(1, 20, 1, 10) << endl; // n=1, c>t
    cout << distance(1, 5, 1, 10) << endl; // n=1
    cout << distance(3, 20, 1, 7) << endl; // c>t,d=1
    cout << distance(3, 5, 1, 7) << endl; // d=1
    cout << distance(3, 5, 2, 8) << endl; 
}