#include <iostream>
#include <vector>

using namespace std;

/** 
 * Part A
 * -------
 * 5: Correct code
 * 3: Works only for some cases, e.g. miss boundary case
 * 2: Hardcoded for very specific inputs, e.g. game of 3 or less piles.
 * 2: Incorrect logic, e.g. checks if current pile >= n, only total previous 2 piles
 * 1: Code cannot run, but some idea is shown
 * 0: Hardcoding or code makes no sense
 **/
int pile(vector<int> game, int n) {
    for (int i = 0; i < game.size(); i++) {
        if (n <= game[i])
            return i;
        n -= game[i];
    }    
}

/**
 * Part B
 * ------
 * 7: Correct code
 * 6: Correct code, but fails when removing certain corner cases, e.g. 
 *     - last pile in game
 * 5: Correct, but fails when attempting to remove empty pile
 * 4: Correct, but not attempy at removing empty pile, otherwise correct
 * 2: Code cannot run, but some idea is shown
 * 0: Hardcoding or code makes no sense
 * 
 * Additional penalties:
 * -2 marks if code iterates thru vector to find pile, rather than just accessing with index.
 * -1 mark from total if does not update game but returns a vector
 * -1 mark for very bad style, e.g. 
 *      - totally bad indentation
 *      - variable names cannot be easily understood
 *      - redundant code that does not change result if removed
 **/
void remove(vector<int> &game, int pile, int n) {    
    game[pile] -= n;
    if (game[pile] == 0) {
        // game.erase(game.begin() + pile);
        // removed entire pile
        for (int i = pile; i < game.size()-1; i++)
            game[i] = game[i+1];
        game.pop_back();
    }    
}

/**
 * Part C
 * ------
 * [3-8]: Correct code that satisfied the conditions below:
 * +2: Locates the correct pile to modify
 * +1: Invalid move, i.e. stretch across > 1 pile
 * +[1,2] Spliting a pile into two
 *     +2: Split is correct for all cases
 *     +1: Adds a new pile, but wrong value for some cases
 * +1: Removes pile when empty
 * +1: Removes left half of pile
 * +1: Removes right half of pile
 *
 * ---
 * -1 mark from total if fails when first == last but works correctly if first < last
 
 * 2: Code cannot run, but shows some idea to locate the correct pile
 * 0: Hardcoding or code makes no sense
 * 
 * -1 mark from total if does not update game but returns a vector
 * -1 mark for very bad style, e.g. totally bad indentation, variable names cannot be easily  understood
 **/
void split(vector<int> &game, int first, int last) {    
    for (int p = 0; p < game.size(); p++) {
        if (first <= game[p] and game[p] < last)
            return; // invalid move. across two piles
        if (last <= game[p]) {
            // found the pile
            // update first side
            if (first > 1) {
                // duplicate to last
                game.insert(game.begin() + p, game[p]);

                // update first
                game[p] = first - 1;
                p += 1;  // move to last pile
            }               
            if (last == game[p]) {
                // completely remove pile
                // game.erase(game.begin() + p);
                remove(game, p, game[p]); // make use of remove
            } else {
                // update last
                game[p] -= last;
            }
            return;  // done
        } else {
            first -= game[p];
            last -= game[p];
        }
    }    
}

// Alternate answer for part C
void split2(vector<int> &game, int first, int last) {
    int p = pile(game, first);  // use pile to check if valid
    if (p != pile(game, last))
        return;  // Invalid move
    for (int i = 0; i < pile; i++) {
        // account for earlier piles
        first -= game[i];
        last -= game[i];
    }
    if (first > 1) {
        // duplicate to last
        game.insert(game.begin() + p, game[p]);
        // update first
        game[p] = first - 1;
        p += 1;  // move to newly created pile
    }
    if (last == game[p]) {
        // completely remove pile
        // game.erase(game.begin() + p);
        remove(game, p, game[p]); // make use of remove
    } else {
        // update last
        game[p] -= last;
    }
}

/*** Special code to allow you to directly cout a vector of int ***/
/****** DO NOT REMOVE ***** DO NOT REMOVE ***** DO NOT REMOVE *****/
ostream& operator<<(ostream& os, const vector<int>& v) {     
    for (int i : v) os << i << " ";
    return os; 
} 
/*******************************************************************/

void test_remove(vector<int> v, int pile, int n) {
    remove(v, pile, n);
    cout << v << endl;
}

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

    test_remove({1, 2, 3, 2, 1}, 2, 2);
    test_remove({1, 2, 3, 2, 1}, 2, 3);	
    test_remove({1, 2, 3, 2, 1}, 4, 1);
    test_remove({1, 2, 3, 2, 1}, 0, 1);
    test_remove({999}, 0, 999);

    // Part C
    game = g;
    split(game, 13, 15);
    cout << "split(game, 13, 15): " << game << endl;
    split(game, 11, 12);
    cout << "split(game, 11, 12): " << game << endl;
    split(game, 5, 7);
    cout << "split(game, 5, 7): " << game << endl;

}