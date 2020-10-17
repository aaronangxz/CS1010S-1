/*
Provide an implementation for the function insert using only the member functions .push_back, .pop_back and .size.
*/

#include <iostream>
#include <vector>

using namespace std;

void insert(vector<int> &v, int pos, int val) 
{
    
    //Loop through vector to look for index (pos)
    for (int i = 0; i < v.size(); i++) 
    {
        //pos found
        if (i == pos)
        {
            //Add one space to the back of vector
            v.push_back(val);
            //Move back one position, looping from the last index           
            for (int j = v.size(); j > pos ; j--)
            {
                v[j] = v[j-1];
            }
            //Replace value at pos index to val
            v[i] = val;
        } 
    }
}

int main (void)
{
    vector<int> my_vector = {0, 1, 2, 3, 4, 5};

    insert(my_vector, 2, 10); // inserts into index 2 erase(my_vector, 5); 
    for (int i = 0; i < my_vector.size(); i++) 
        cout << my_vector[i] << " ";
}