//Implement the function count(FILE *fp) that returns the number of alphabatical letters in the file fp.

#include <iostream>

using namespace std;

int count(FILE *fp) 
{
    int alphabet = 0, count = 0;

    while ((alphabet = fgetc(fp)) != EOF)
    {
        if (alphabet == ' ' || alphabet == '\n')
        {
            count++;
        } 

        if (alphabet == '\0')
        {
            count --;
        }
        //Problem: Need to remove empty lines after newline
        
    }
    return count;
}

int main(void)
{
    //count(<pop.txt>);
}