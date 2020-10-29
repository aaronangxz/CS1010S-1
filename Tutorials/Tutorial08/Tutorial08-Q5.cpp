#include <iostream>
#include <ctype.h>

using namespace std;

void to_upper(FILE *in, FILE *out) 
{
    char letter;
    int Prev_symbol;
    int Prev_alpha = 0;
    
    while((letter = fgetc(in))!=EOF)
    {
        if (!Prev_alpha && Prev_symbol != 39 && islower(letter))
        {
            letter = toupper(letter);
        }
        fprintf(out,"%c",letter);
        Prev_alpha = isalpha(letter);
        Prev_symbol = letter;
    }
}

int main(void)
{
    //to_upper(<pop.txt>, <out.txt>);
    //to_upper(<wind.txt>, <out.txt>);
}