/*
Provide an implementation for the function erase using only the member functions .push_back, .pop_back and .size.
*/

#include <iostream>
#include <vector>

using namespace std;

void erase(vector<int> &v, int pos) 
{
    
    //Loop through vector to look for index (pos)
    for (int i = 0; i < v.size(); i++) 
    {
        //pos found
        if (i == pos)
        {
            //Run through from pos index
            for (int j = pos; j < v.size() ; j++)
            {
                //Starting from pos, replace each index with the next digit
                v[j] = v[j+1];
            }
            //Remove last digit
            v.pop_back();
        } 
    }
}

int main (void)
{
    vector<int> my_vector = {0, 1, 2, 3, 4, 5};

    erase(my_vector, 2); // removes element at index 5  
      
    for (int i = 0; i < my_vector.size(); i++) 
        cout << my_vector[i] << " ";
}