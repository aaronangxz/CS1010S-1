//Write a function to_int which takes in a string of digits (the characters are all '0' - '9') and returns the number represented in the string as an int type.
//Hint: What is the ASCII code for character '0'?

#include <math.h>
#include <stdio.h>

int to_int(char str[]) 
{
    int toint=0, len= 0;
    
    //Compute the size of array str[]
    //Count from first position (str[0]) to null (str[\0])
    for (int j=1; str[j] !='\0';j++)
    {
        len += 1;
        printf("len is: %d\n",len);
    }
    
    for (int i=0; str[i] !='\0';i++)
    {
        /*
        Taking "0" as reference, the ASCII code is 48
        To obtain "0" as integer, we have to -48. Similar for 1~9
        i.e. char '5' = 53. To get integer 5, we have to perform 53 - 48 = 5
        To move str[i] in correct order after converting to integer
        Times integer value by 10^length-i
            i.e. str[3]={1,2,3} -> 
            i = 0, 49 - 48 = 1, * 10^2-0 = 100
            i = 2, 50 - 48 = 2, * 10^2-1 = 20
            i = 3, 51 - 48 = 3, * 10^2-2 = 3
            Result is 100+20+3 = 123
        */
        toint += (str[i] - 48) * pow(10,len-i);
        /*
            i = 0, toint = 0 + [(49 - 48) * 10^5-0] = 0 + 10000 = 10000
            i = 2, toint = 10000 + [(50 - 48) * 10^5 - 1] = 10000 + 2000 = 12000
            i = 3, toint = 12000 + [(51 - 48) * 10^5 - 2] = 12000 + 300 = 12300
            i = 4, toint = 12300 + [(52 - 48) * 10^5 - 3] = 12300 + 40 = 12340
            i = 5, toint = 12340 + [(53 - 48) * 10^5 - 4] = 12340 + 5 = 12345
        */
        printf("toint is: %d\n",toint);
    }
    return toint;
}

int main(void) {
    int testcase1 = to_int("12345");
    int testcase2 = to_int("101020");
    int testcase3 = to_int("000000");
    printf("Test case 1: %d\n",testcase1);
    printf("Test case 2: %d\n",testcase2);
    printf("Test case 3: %d\n",testcase3);
    return 0;
}