#include <stdio.h>
#include <math.h>

void swap(int*a, int*b) ; 
void sort(int *a, int *b, int *c) 
{  
   int *number[] = {a, b, c};
   
   for (int i = 0; i < 3; i++)
   {
       for (int j = 1; j < 3; j++)
       {
           if (*number[j - 1] > *number[j])
           {
               swap(number[j - 1],number[j]);
           }
       }
   }
}

int main(void) 
{

}