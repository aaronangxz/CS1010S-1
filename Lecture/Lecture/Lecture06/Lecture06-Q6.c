//Write a function to_upper that takes as input a string, and converts all its lowercase characters to uppercase.
//Hint: The ASCII table might help.

#include <math.h>
#include <stdio.h>
#include <string.h>

void to_upper(char str[]) 
{
    for (int i = 0; str[i] !='\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        { 
            str[i] = str[i] - 32; 
        }
    }
}

int main(void) 
{
    to_upper("apple");
    to_upper("Must Work With Mixed CaSe");
    to_upper("hello world!!");
}
