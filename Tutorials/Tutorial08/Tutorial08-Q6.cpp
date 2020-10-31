#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

void reverse(FILE *in, FILE *out) 
{
    char buff[1000];
    while (fgets(buff,1000,in) != NULL)
    {
        int i = strlen(buff) - 1;
        if (buff[i] == '\n')
        {
            i--;
        }
        for ( ; i >= 0; i--)
        {
            fputc(buff[i],out);
        }
        fputc('\n',out);
    }
    
    
    
    // char line;
    // int count = 0;

    // while((!feof(in)))
    // {
    //     if (!feof(in))
    //     {
    //         line = fgetc(in);
    //         fseek(out,0,2);
    //         fprintf(out,"%s",line);
    //     }
    // }
    
    
    
    // char letter;
    // int charcount;

    // fseek(in, 0L, SEEK_END);
    // int loc = ftell(in);
    
    // while((letter = fgetc(in))!=EOF)
    // {
    //     if (letter != ',' || letter != ',')
    //     {
    //         charcount ++;        
    //     }
    // }

    // loc = loc-1;


    // while(loc >= 0L) 
    // {
    //     fseek(in, loc, SEEK_SET);
    //     letter = fgetc(in);
    //     fputc(letter, out);
    //     loc--;
    // }

    // while((letter = fgetc(in))!=EOF)
    // {
    //     if (letter == ',' || letter == '.')
    //     {
    //         while (letter != '\0')
    //         {
    //             fputc(letter,out);
    //             fseek(in,-2L,1);
    //         }
    //     }
        
    // }    


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