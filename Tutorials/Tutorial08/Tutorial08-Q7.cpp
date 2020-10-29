#include <iostream>
#include <ctype.h>

using namespace std;

void to_upper(FILE *in, FILE *out) 
{
    char letter;
    int Prev_symbol = 46 ;
    int Prev_alpha = 0;
    int prevprev;
    
    while((letter = fgetc(in))!=EOF)
    {
        prevprev = fseek(in, -2, 1);
        if (Prev_symbol == 46 || prevprev == 46 && islower(letter))
        {
            letter = toupper(letter);                
        }
        if (Prev_symbol == '\n')
            {
                if (prevprev == '.')
                {
                    letter = toupper(letter);                
                }
                
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