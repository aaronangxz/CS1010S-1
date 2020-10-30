#include <stdio.h>
#include <string.h>

// Q2
void filter(const char *original, const char threshold, char *passed, char *failed)
{
    // Your answer here
}


int main(void)
{ 
    char passed[500], failed[500];

    filter("ABCDEF abcdef 1234!@#", 'D', passed, failed);
    printf("P: \"%s\"\n", passed);
    printf("F: \"%s\"\n", failed);

    filter("PE is FUN!", ' ', passed, failed);
    printf("P: \"%s\"\n", passed);
    printf("F: \"%s\"\n", failed);

    return 0;
}