//Implement the function count(FILE *fp) that returns the number of alphabatical letters in the file fp.

#include <iostream>

using namespace std;

int count(FILE *fp) 
{
    int alphabet = 0, count = 0, blank = 0;

    while ((alphabet = fgetc(fp)) != EOF)
    {
        if (alphabet == ' ' || alphabet == '\n')
        {
            if ((alphabet = fgetc(fp))== '\n')
            {
                fseek(fp,-1,1);
                blank++;
            }
            
            count++;

        } 
        
    }
    return count - blank;
}

int main(void)
{
    //count(<pop.txt>);
}