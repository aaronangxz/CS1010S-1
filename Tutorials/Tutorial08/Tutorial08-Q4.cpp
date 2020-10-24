#include <iostream>

using namespace std;

void to_upper(FILE *in, FILE *out) 
{
    int letters;

    while ((letters = fgetc(in)) != EOF)
    {
        if (letters >= 97 && letters <= 122)
        {
            letters -= 32;   
        } 
        fprintf(out,"%c",letters);
    } 
}

int main(void)
{
    //to_upper(<pop.txt>, <out.txt>);
    //to_upper(<wind.txt>, <out.txt>);
}