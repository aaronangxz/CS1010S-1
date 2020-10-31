#include <iostream>
#include <ctype.h>

using namespace std;

void to_upper(FILE *in, FILE *out) 
{
    int c;
    bool sentence = true;
    while((c = fgetc(in))!= EOF)
    {
        if(isalpha(c) && !isspace(c) && sentence)
        {
            if(islower(c))
            {
                c -= 32;
            }
            sentence = false;
        }
        else if(c == '.')
        {
            sentence = true;
        }
        fputc(c,out);
    }
}

int main(void)
{
    //to_upper(<pop.txt>, <out.txt>);
    //to_upper(<wind.txt>, <out.txt>);
}