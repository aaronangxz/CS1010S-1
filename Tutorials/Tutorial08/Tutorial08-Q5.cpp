#include <iostream>
#include <ctype.h>

using namespace std;

void to_upper(FILE *in, FILE *out) 
{
    int letters;

    while ((letters = fgetc(in)) != EOF)
    {
        if (letters == ' ' || letters == '\n') 
        {
            letters = fgetc(in);
            if (isalpha(letters)) 
            {
                fseek(in, -1, 1);
                fputc(toupper(letters), in);
            }
        }
        fprintf(out,"%c",letters);
    } 
}

int main(void)
{
    //to_upper(<pop.txt>, <out.txt>);
    //to_upper(<wind.txt>, <out.txt>);
}