#include <stdio.h>

int distance(int num, int capacity, int delay, int t) {
    int speed = 0, D = 0;
    int num_on = 0, num_off = 0;

    for (int i=0; i <= t; i++) {
        // update distance
        D += speed;

        // turn on one engine if needed
        if (i % delay == 0 && num_on < num)
            num_on++;        

        // turn off engine if needed
        if (i >= capacity && (i-capacity) % delay == 0 && num_off < num)
            num_off++;            

        printf("%d %d %d %d %d %d\n", i, D, speed, capacity, num_on, num_off);

        // update the speed
        speed += num_on - num_off;        
    }
    return D;
}

void _d(int n, int c, int d, int t) {
    printf("\ndistance(%d, %d, %d, %d)\n", n, c, d, t);
    printf("%d\n", distance(n, c, d, t));
}

int main() {
    printf("%d\n\n", distance(3, 5, 2, 15));
    printf("%d\n\n", distance(1, 20, 1, 10));
    printf("%d\n\n", distance(1, 5, 1, 10));
    printf("%d\n\n", distance(3, 20, 1, 7));
    printf("%d\n\n", distance(3, 5, 1, 7));
    printf("%d\n\n", distance(3, 5, 2, 8));

    _d(1, 50, 50, 30);
    _d(1, 7, 5, 20);
    _d(10, 50, 1, 5);
    _d(5, 5, 3, 5);
    _d(3, 2, 3, 8));

}
