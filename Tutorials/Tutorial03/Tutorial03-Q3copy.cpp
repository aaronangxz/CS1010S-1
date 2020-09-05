#include <stdio.h>

void swap(int *x, int *y) 
{ 
int temp = *x;
*x = *y;
*y = temp; 
printf("\ntemp is %d\n",temp);
printf("\n*y is %d\n",*y);
printf("\n*x is %d\n",*x);
printf("\nx is %d\n",x);
printf("\ny is %d\n",y);



}


int main(void) 
{
// int x = 1, y = 5; 
// printf("x=%d, y=%d\n", x, y); 
// swap(&x, &y);
// printf("x=%d, y=%d\n", x, y);
int x = 9999;

printf("\nValue is %d\n", x);
printf("\n&x is %d\n", &x);
printf("\nValue at &x is %d\n", *&x);




}