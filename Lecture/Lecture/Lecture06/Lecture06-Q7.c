// Write a function num_words that takes in a sentence as a string, and returns the number of words in the sentence.
// You may assume that the words are separated by exactly one space and the sentence does not begin or end with a space.
// Note: const char * is required in the function parameter to allow us to pass string literals into the function.

#include <math.h>
#include <stdio.h>
#include <string.h>

int num_words(const char str[]) 
{
    int len = strlen(str);
    int count = 0;
    for(int i = 0; i < len ; i++)
    {
        if (str[i] == 32)
        {
            count += 1;
            //printf("%d",count);
        }
    }
    return count +1;
}

int main(void) 
{
   int testcase1 = num_words("Lorem ipsum dolor sit amet.");
   printf("Test case 1: %d",testcase1);
}
