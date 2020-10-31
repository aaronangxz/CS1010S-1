#include <iostream>
#include <ctype.h>

using namespace std;

void interleave(FILE *in1, FILE *in2, FILE *out) 
{
    char line1[999], line2[999];
   
    while((!feof(in1)) || (!feof(in2)))
    {
        if (!feof(in1))
        {
            fgets(line1,999,in1);
            fprintf(out,"%s",line1);
        }
        
        if (!feof(in2))
        {
            fgets(line2,999,in2);
            fprintf(out,"%s",line1);
        }
    } 
}

int main(void)
{
    //interleave(<pop.txt>, <wind.txt>, <out.txt>);  
    //interleave(<wind.txt>, <pop.txt>, <out.txt>);
}