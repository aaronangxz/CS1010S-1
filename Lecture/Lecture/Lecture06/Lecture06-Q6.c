//Write a function to_upper that takes as input a string, and converts all its lowercase characters to uppercase.
//Hint: The ASCII table might help.

#include <math.h>
#include <stdio.h>

void to_upper(char str[]);

int main(void) 
{
    to_upper("apple");
    to_upper("Must Work With Mixed CaSe");
    to_upper("hello world!!");
    //printf("%c",to_upper);
}

void to_upper(char str[]) 
{
    // int len = 0;
    
    // for (int j=1; str[j] !='\0';j++)
    // {
    //     len += 1;
    //     //printf("len is: %d\n",len);
    // }

    for (int i=0; str[i] !='\0';i++)
    {
       char temp[50];
       if(str[i]>='a' && str[i]<='z')
        {
            temp[i] =  str[i] - 32;  
            str[i] = temp[i];
            //printf("%c",toup[i]);
        }
        else
        {
            temp[i] = str[i];
            str[i] = temp[i];
            //printf("%c",toup[i]);
        }
        // toup[i] = str[i] - 32;
        // printf("%c",toup[i]);
    }

    // for (int k = 0; k < len; k++)
    // {
    //     str[k] = toup[k];
    //     printf("%c",str[k]);
    // }
    printf("\n");
}