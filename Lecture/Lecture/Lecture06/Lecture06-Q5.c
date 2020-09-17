#include <math.h>
#include <stdio.h>

int to_int(char str[]) 
{
    int toint=0, len= 0;
    
    for (int j=1; str[j] !='\0';j++)
    {
        len += 1;
        printf("len is: %d\n",len);
    }
    
    for (int i=0; str[i] !='\0';i++)
    {
        toint += (str[i] - 48) * pow(10,len-i);
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