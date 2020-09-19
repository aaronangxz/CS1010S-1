/**
 * Lab 4. Introduction to VSC debugger
 */

#include <iostream>

using namespace std;

/**
 * Swaps two integers
 */
void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

/**
 * Rearrange three integers in ascending order
 */
void sort(int &a, int &b, int &c) {
    if (a > b) {
        swap(&a, &b);
    }
    if (b > c) {
        swap(&b, &c);
    }
    if (a > b) {
        swap(&a, &b);
    }
}

int main() {
    int i = 3, j = 2, k = 1;
    sort(i, j, k);
    cout << i << ", " << j << ", " << k << endl;
    return 0;
}