#include <stdio.h>


int main(void) 
{   
    char base_digits[16] =
	 {'0', '1', '2', '3', '4', '5', '6', '7',
	  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int n = 130, b = 5;
    int converted[50];
    int to_convert;
    int i = 0;
    
    while ( n != 0)
    {
    converted[i] = n % b;
    n = n / b;
    i ++ ;
    }
    i --;

    for(  ; i>=0; i--)
   {
	 printf("%c",base_digits[converted[i]]);
   }

}