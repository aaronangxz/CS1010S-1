//Implement the function count(FILE *fp) that returns the number of alphabatical letters in the file fp.

#include <iostream>

using namespace std;

int readFAT( FILE* input, int fat[])
{
    int read;
    int x;
    int size;

    cout << "File name: " << input << endl;

    cout << "FAT size is " << size << endl;

    while ((!feof(input)))
    {
        cin >> x;
        printFAT(fat,i);
        
    }

}

void printFAT( int fat[], int size)
{
    cout << size << "[" << fat << "]" << endl;
}

void printFileAt( int fat[], int start)
{

}

int main(void)
{
    //count(<pop.txt>);
}