#include <stdio.h>
int main(void) {
    int cur, prev1=1, prev2=1;

    cur = prev1 + prev2;
    prev2 = prev1;
    prev1 = cur;

    cur = prev1 + prev2;
    prev2 = prev1;
    prev1 = cur;

    cur = prev1 + prev2;
    prev2 = prev1;
    prev1 = cur;

    printf("cur is %d; prev1 is %d; prev2 is %d\n", cur, prev1, prev2);
    
    return 0;
}