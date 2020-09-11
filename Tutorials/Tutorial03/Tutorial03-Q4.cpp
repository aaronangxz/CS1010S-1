#include <math.h>
#include <iostream>
using namespace std;

void swap(int*a, int*b)
{
    int temp = *a;  
    *a = *b;  
    *b = temp; 
} 

//---------- Bubble Sort ---------- //

void sort(int *a, int *b, int *c) 
{  
   //Populate a, b, c into number[] as pointers
   //*number[0] = {a}, *number[1] = {b}, *number[2] = {c}
   int *number[] = {a, b, c};
   
   //Loop 1: to loop through all numbers
   //If there are 3 numbers, loop 3 times
   for (int i = 0; i < 3; i++)
   {
       //Loop 2: to swap numbers
       //If there are 3 numbers, only have to loop 2 times
       //Since only have to compare and swap 2 times 
       //e.g. compare number[0] & number[1], compare number[1] & number[2]
       for (int j = 1; j < 3; j++)
       {
           //If *number[0] > *number[1], swap
           //In order to move the smaller number to the front
           if (*number[j - 1] > *number[j])
           {
               swap(number[j - 1],number[j]);
           }
           //Else go into j = 2, compare *number[1] & *number[2]
       }
       //Goes into i = 1 to check again
   }
}

/*
    int a=5, b=7, c=2; sort(&a, &b, &c);

    i = 0, j = 1
    5,7,2
    i = 0, j = 2
    5,2,7

    i = 1, j = 1
    2,5,7 --> DONE
    i = 1, j = 2
    2,5,7

    i = 2, j = 1
    2,5,7
    i = 2, j = 2
    2,5,7

    -----------------------------------------

    int a=3, b=2, c=1; sort(&a, &b, &c);	

    i = 0, j = 1
    2,3,1
    i = 0, j = 2
    2,1,3

    i = 1, j = 1
    1,2,3 --> DONE
    i = 1, j = 2
    1,2,3

    i = 2, j = 1
    1,2,3
    i = 2, j = 2
    1,2,3

    -----------------------------------------

    int a=4, b=2, c=3, d=1; sort(&a, &b, &c, &d);	

    i = 0, j = 1
    2,4,3,1
    i = 0, j = 2
    2,3,4,1
    i = 0, j = 3
    2,3,1,4

    i = 1, j = 1
    2,3,1,4
    i = 1, j = 2
    2,1,3,4
    i = 1, j = 3
    2,1,3,4

    i = 2, j = 1
    1,2,3,4 --> DONE
    i = 2, j = 2
    1,2,3,4
    i = 2, j = 3
    1,2,3,4

    i = 3, j = 1
    1,2,3,4
    i = 3, j = 2
    1,2,3,4
    i = 3, j = 3
    1,2,3,4
*/