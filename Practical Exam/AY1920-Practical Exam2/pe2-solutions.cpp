#include <iostream>
#include <vector>

using namespace std;


/************
 *  Part A  * 
 ************/
int pile(vector<int> game, int n) {
    for (int i = 0; i < game.size(); i++) {
        if (n <= game[i])
            return i;
        n -= game[i];
    }    
}


/************
 *  Part B  * 
 ************/
void remove(vector<int> &game, int pile, int n) {    
    game[pile] -= n;
    if (game[pile] == 0) {
        game.erase(game.begin() + pile);
        // Alternatively, see tutorial 8 on how to remove 
        // element from vector
    }    
}


/************
 *  Part C  * 
 ************/
void split(vector<int> &game, int first, int last) {    
    for (int p = 0; p < game.size(); p++) {
        // check if first is in current pile, but last is not
        if (first <= game[p] and game[p] < last)
            return; // invalid move. across two piles
        if (last <= game[p]) {
            // found the pile
            if (first > 1) {
                // Need to split left
                // duplicate to right
                game.insert(game.begin() + p, game[p]);

                // update left pile
                game[p] = first - 1;
                p += 1;  // move to last pile
            }               
            if (last == game[p]) {
                // completely right pile
                game.erase(game.begin() + p);
            } else {
                // update right pile
                game[p] -= last;
            }
            return;  // done
        } else {
            // Not yet reach the pile, go to the next
            first -= game[p];
            last -= game[p];
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