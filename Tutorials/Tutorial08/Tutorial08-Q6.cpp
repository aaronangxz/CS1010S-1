#include <iostream>
#include <ctype.h>

using namespace std;

void reverse(FILE *in, FILE *out) 
{
    char letter;
    int charcount;

    fseek(in,-1L,2);
    charcount = ftell(in) + 1;
    
    while((letter = fgetc(in))!=EOF)
    {
        if (letter == ',' || letter == '.')
        {
            while (letter != '\0')
            {
                fputc(letter,out);
                fseek(in,-2L,1);
            }
        }
        
    }    


    // while (charcount)
    // {
    //     letter = fgetc(in);
        
    //     //fprintf(out,"%c",letter);
    //     charcount --;
    // }

}

int main(void)
{
    //to_upper(<pop.txt>, <out.txt>);
    //to_upper(<wind.txt>, <out.txt>);
}