//Implement the function count(FILE *fp) that returns the number of alphabatical letters in the file fp.

#include <iostream>

using namespace std;

int count(FILE *fp) 
{
    int alphabet = 0, count = 0;

    while ((alphabet = fgetc(fp)) != EOF)
    {
        if ((alphabet >= 65 && alphabet <= 90) || (alphabet >= 97 && alphabet <= 122))
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