//Write a function to_upper that takes as input a string, and converts all its lowercase characters to uppercase.
//Hint: The ASCII table might help.

#include <math.h>
#include <stdio.h>
#include <string.h>

void to_upper(char str[]) 
{
    //Count from first position (str[0]) to null (str[\0])
    for (int i = 0; str[i] !='\0';i++)
    {
        //Minus 32 (ASCII lower case to upper case) when value in array is a to z inclusive.
        if(str[i] >= 'a' && str[i] <= 'z')
        { 
            //Update the original array with new value
            str[i] = str[i] - 32; 
        }
    }
}

/*
Getting this error -> /bin/sh: line 1:  7040 Bus error: 10 on VS Code.
Somehow works on Coursemology and passed all test cases.
*/

int main(void) 
{
    to_upper("apple");
    to_upper("Must Work With Mixed CaSe");
    to_upper("hello world!!");
}