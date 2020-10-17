/*
The function void mutate takes in a vector of int, and sets each element to the sum of its neighbours, with the ends wrapping around.
For example, the vector 0, 1, 2, 3, 4, 5 will mutate to 1+5, 0+2, 1+3, 2+4, 3+5, 4+0 . 
Provide an implementation for the function void mutate .
*/

#include <iostream>
#include <vector>

using namespace std;

void mutate(vector<int> &vec) 
{
    //Create a duplicate, as the loop will change the vector's value
    vector<int> vec_copy = vec;

    for (int i = 0; i < vec.size(); i++)
    {
        //For first index, create wrap around
        if (i == 0)
        {
            //Sum of last index + next index
            vec[i] = vec_copy.back() + vec_copy[i+1];
        }
        //For last index, create wrap around
        else if (i == vec.size()-1)
        {
            //Sum of previous index + first index
            vec[i] = vec_copy[i - 1] + vec_copy.front();
        }
        //The rest
        else
        {
            vec[i] = vec_copy[i-1] + vec_copy[i+1];
        }
    }
}

int main (void)
{
    vector<int> my_vector = {0, 1, 2, 3, 4, 5};

    mutate(my_vector);
      
    for (int i = 0; i < my_vector.size(); i++) 
        cout << my_vector[i] << " ";
}