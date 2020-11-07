#include <iostream>

using namespace std;

int readFAT( FILE* input, int fat[])
{
    int size, i;
    fscanf(input,"%d",&size);
    for (int i = 0; i < size; i++)
    {
        fscanf(input,"%d",&(fat[i]));
    }
    return size;
}

void printFAT( int fat[], int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%3d[%3d]",i,fat[i]);
    }
}

void printFileAt( int fat[], int start)
{
    int idx = start;
    while (idx != -1)
    {
        printf("%d",idx);
        idx = fat[idx];
    }
    printf("\n");
}

int main(void)
{
    FILE* input;
    char filename[999];
    int i, fat[1024], size, start;

    printf("File name: ");
    scanf("%s",filename);
    
    input = fopen(filename,"r");
    size = readFAT(input,fat);
    printFAT(fat,size);

    while (scanf("%d",&start)==1)
    {
        printFileAt(fat,start);
    }
}