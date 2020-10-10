#include <iostream>

using namespace std;

void print_cells(bool cells[],int size)
{
    for (int i = 0; i < size; i++)
        {
            if (cells[i] == 1)
            {
                printf("X");
            }
            else if (cells[i] == 0)
            {
                printf("_");
            }
        }
}

void next_gen_cells (bool cells[],int size)
{
    bool new_cells[size];

    for (int i = 0; i < size; i++)
    {
        if (cells[i])
        {
            new_cells[i] = false;
        }
        else 
        {
            int neighbours = 0;
            if (i > 0 && cells[i - 1])
            {
                neighbours ++;
            }
            if (i < size - 1 && cells[ i + 1])
            {
                neighbours ++;
            }
            if (neighbours == 1)
            {
                new_cells[i] = true;
            }
            else
            {
                new_cells[i] = false;
            }
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cells[i] = new_cells[i];
    }
    
}

void game_of_life(bool cells[], int size, int num_gen) 
{
    
    for (int i = 0; i < num_gen ; i++)
    {
        print_cells(cells,size);
        next_gen_cells(cells,size);
        printf("\n");
    }
}

int main(void) 
{
    //int cells[]={0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    //game_of_life({0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, 15, 9);
    game_of_life((bool []){0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, 15, 9);
    //game_of_life((bool []){0, 1, 0, 1, 0, 1, 0, 1, 0}, 9, 1);
}