#include <iostream>
#include <ctype.h>

using namespace std;

void copy(FILE *in, FILE *out) 
{
    char letter;
    int charcount;
    
    while((letter = fgetc(in))!=EOF)
    {
        fputc(letter,out);
    }    
}

int main(void)
{
    //to_upper(<pop.txt>, <out.txt>);
    //to_upper(<wind.txt>, <out.txt>);
}