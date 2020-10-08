#include <iostream>
#include <vector>

using namespace std;

vector<bool> And(vector<bool> v1, vector<bool> v2) 
{
    vector<bool> out = {};
    for (int i = 0; (i < v1.size() && 1 < v2.size()); i++)
    {
        if (v1[i] == 1 && (v1[i] == v2[i]))
        {
           out[i] = 1;
        }
        else
        {
            out[i] = 0;
        }
    }
}


int main (void)
{
    return 0;
}