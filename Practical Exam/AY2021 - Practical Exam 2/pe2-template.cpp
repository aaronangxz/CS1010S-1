#include <iostream>
#include <vector>
#include "lib/pe2-functions.h"  /* given functions */

using namespace std;

/* Part A */
int sow(vector<int> & row, int pit) 
{
    if (pit < row[pit])
    {
        int count = 0, sow = 0;
        while (count <= row[pit])
        {
            count += row.size()+ 1;
            sow++;
        }
        
        int to_add = row[pit] - sow;
        int i = pit - 1;
        row[pit] = 0;

        while (to_add != 0)
        {
            if (i < 0) i = row.size() - 1;
            row[i] ++;
            i --;
            to_add --;
        }
        
        return sow;
    }
    else
    {
        int to_add = row[pit];
        int i = pit - 1;
        row[pit] = 0;

        while (to_add != 0)
        {
            if (i < 0) i = row.size() - 1;
            row[i] ++;
            i --;
            to_add --;
        }
        return 0;
    }
}

/* Part B */
vector<int> slice(const vector<int> v, int start, int end) 
{
    vector<int> new_v;
    for (int i = start; i < end; i++)
    {
        new_v.push_back(v[i]);
    }
    return new_v;
}


/* Part C */
int sow2(vector<int> & our_row, vector<int> & their_row, int pit) 
{
    vector<int> combi = concat(their_row,our_row);
    int sow2 = sow(combi,pit+their_row.size());
    
    sow(combi,pit+their_row.size());
    our_row = slice(combi,their_row.size(),combi.size());
    their_row = slice(combi,0,their_row.size());

    return sow2;
}


/*** SAMPLE TESTS ***/

/* Part A Test Driver */
void test_sow(vector<int> row, int pit) {
    cout << "-- Part A Test --" << endl;
    cout << "Before: " << row << endl;
    cout << "Return: " << sow(row, pit) << endl;
    cout << "After:  " << row << endl << endl;
}

/* Part C Test Driver */
void test_sow2(vector<int> our, vector<int> opp, int pit) {
    cout << "-- Part C Test --" << endl;
    cout << "Before: " << opp << endl;
    cout << "        " << our << endl;
    cout << "Return: " << sow2(our, opp, pit) << endl;
    cout << "After:  " << opp << endl;
    cout << "        " << our << endl << endl;
}

int main() {
    /* Part A Sample Tests */
    test_sow({4, 4, 4, 4, 4, 4}, 1);
    test_sow({5, 0, 4, 4, 5, 5}, 5);
    test_sow({8, 8, 8, 8}, 0);

    /* Part B Sample Tests */
    cout << slice({1, 2, 3, 4, 5, 6}, 2, 5) << endl;
    cout << slice({1, 2, 3, 4, 5, 6}, 0, 6) << endl;
    cout << slice({1, 2, 3, 4, 5, 6}, 3, 4) << endl;

    /* Part C Sample Tests */
    test_sow2({4, 10, 4, 4, 4, 4}, {4, 4, 4, 4, 4, 4}, 1);
    test_sow2({9, 8, 7}, {3, 4, 5}, 0);
    return 0;
}