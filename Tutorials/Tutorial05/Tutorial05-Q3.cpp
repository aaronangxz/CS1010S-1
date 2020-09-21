#include <iostream>

using namespace std;

void print_cells(char chara)
{
    printf("%c",chara);
}

void game_of_life(bool cells[], int size, int num_gen) 
{
    for (int i = 0; i < size; i++)
    {
        if (cells[i] == 1)
        {
            //print_cells('X');
            printf("X");
        }
        //print_cells('_');
        printf("_");
    }
    
}



void next_gen (int cells)
{

}


int main(void) 
{
    int cells[]={0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    //game_of_life({0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, 15, 9);
    
    for (int i = 0; i < 9; i++)
    {
        for (int i = 0; i < 15; i++)
        {
            if (cells[i-1] == 1 || cells[i+1] == 1)
            {
                //print_cells('X');
                printf("X");
            }
            else
            {
                //print_cells('_');
            printf("_");
            }
        }
    }
    
    
    
}