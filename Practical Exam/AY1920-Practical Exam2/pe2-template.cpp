#include <iostream>
#include <vector>

using namespace std;


/************
 *  Part A  * 
 ************/
int pile(vector<int> game, int n) {
    int match;
    for (int i = 0; i < game.size(); i++)
    {
        if (n >= game[i])
        {
            match = i;
        }
        else
        {
            match = i - 1;
        }
    }
    return match;
}


/************
 *  Part B  * 
 ************/
void remove(vector<int> &game, int pile, int n) {    
    for (int i = 0; i < game.size(); i++)
    {
        if (i == pile)
        {
            game[i] -= n;
        }
        if (game[i] == 0)
        {
            game.erase(game.begin() + i);
        }
    }
}


/************
 *  Part C  * 
 ************/
void split(vector<int> &game, int first, int last) 
{   
    if (pile(game,first) == pile(game,last))
    {
        for (int i = first; i <= last; i++)
        {
            remove(game,pile(game,first),i);
        }
        
        
        
        
    }

    
}

/*** Special code to allow you to directly cout a vector of int ***/
/****** DO NOT REMOVE ***** DO NOT REMOVE ***** DO NOT REMOVE *****/
ostream& operator<<(ostream& os, const vector<int>& v) {     
    for (int i : v) os << i << " ";
    return os; 
} 
/*******************************************************************/


int main() {
    // Part A
    vector<int> g = {4, 6, 8};

    cout << "pile({4, 6, 8}, 5):  " << pile({4, 6, 8}, 5) << endl;
    cout << "pile({4, 6, 8}, 16): " << pile({4, 6, 8}, 16) << endl;

    // Part B
    vector<int> game = g;
    remove(game, 0, 2);
    cout << "remove(game, 0, 2): " << game << endl;
    remove(game, 1, 2);
    cout << "remove(game, 1, 2): " << game << endl;
    remove(game, 2, 2);
    cout << "remove(game, 2, 2): " << game << endl; 
    remove(game, 1, 4);
    cout << "remove(game, 1, 4): " << game << endl; 

    // Part C
    game = g;
    split(game, 13, 15);
    cout << "split(game, 13, 15): " << game << endl;
    split(game, 11, 12);
    cout << "split(game, 11, 12): " << game << endl;
    split(game, 5, 7);
    cout << "split(game, 5, 7): " << game << endl;
    split(game, 3, 6);
    cout << "split(game, 3, 6): " << game << endl;

    return 0;
}