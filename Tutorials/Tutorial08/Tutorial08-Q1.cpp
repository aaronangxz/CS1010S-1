//Implement the function count(FILE *fp) that returns the number of alphabatical letters in the file fp.

#include <iostream>

using namespace std;

int count(FILE *fp) 
{
    int alphabet = 0, count = 0;

    while ((alphabet = fgetc(fp)) != EOF)
    {
        count += isalpha(alphabet)? 1 : 0;
    }
    return count;
}

int main(void)
{
    //count(<pop.txt>);
}