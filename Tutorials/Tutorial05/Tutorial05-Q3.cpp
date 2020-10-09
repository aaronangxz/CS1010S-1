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
    for (int i = 0; i < size; i++)
    {
        if ((i + 1 ) < size)
        {
            // if (cells[i])
            // {
            //     cells[i] = 0;
            //     cells[i-1] = 1;
            //     //cells[size - i + 1] = 1;
            //     cells[i+1] = 1;
            // }
            // if (cells[i] == 0 && cells[i-1] == 1 )
            // {
            //     //cells[i+1] = 1;
            //     cells[i] = 1;
            // }
            
            
            if (cells[i] == 0)
            {
                if (cells[i+1]==1)
                {
                    cells[i] = 1;
                }
            }
            else if (cells[i] == 1)
            {
                cells[i] = 0;
            }
            else if (cells[i] == 0 && cells[i-1] == 1)
            {
                cells[i] = 1;
            }
            
            

        }
        
    }
}

void game_of_life(bool cells[], int size, int num_gen) 
{
    //First gen
    print_cells(cells,size);
    cout << endl;
    
    for (int i = 1; i < num_gen ; i++)
    {
        next_gen_cells(cells,size);
        print_cells(cells,size);
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