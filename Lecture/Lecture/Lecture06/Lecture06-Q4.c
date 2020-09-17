//Write a function max that takes in an array of int and its size, and returns the maximum value found in the array.

#include <math.h>
#include <stdio.h>

int max(int arr[], int size) 
{
    int max = arr[0]; 
  
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i]; 
        }    
    }
    return max;     
}

int main(void) {
    int arr1[] = {1, 2, 3, 4, 5}; 
    int testcase1 = max(arr1, 5);
    printf("Test case 1: %d\n",testcase1);

    int arr2[] = {-5, 22, 0, 18, 4}; 
    int testcase2 = max(arr2, 5);
    printf("Test case 2: %d\n",testcase2);

    int arr3[] = {-5, -77, -253, -123};
    int testcase3 = max(arr3, 4);
    printf("Test case 3: %d\n",testcase3);
    
    return 0;
}