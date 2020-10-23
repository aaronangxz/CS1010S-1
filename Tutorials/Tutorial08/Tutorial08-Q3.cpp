//Implement the function count(FILE *fp) that returns the number of alphabatical letters in the file fp.

#include <iostream>

using namespace std;

int count(FILE *fp) 
{
    int alphabet = 0, count = 0;

    while ((alphabet = fgetc(fp)) != EOF)
    {
        if (alphabet == 46)
        {
            count++;
        } 
    }
    return count;
}

int main(void)
{
    //count(<pop.txt>);
}