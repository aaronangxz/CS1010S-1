#include <iostream>
#include <vector>

using namespace std;

vector<bool> And(vector<bool> v1, vector<bool> v2) 
{
    vector<bool> out;
    
    for (int i = 0; (i < v1.size()); i++)
    {
        if (v1[i] == v2[i] && (v1[i] == 1 || v2[i] == 1) )
        {
           v1[i] = 1;
        }
        else
        {
            v1[i] = 0;
        }
    }
    return v1;
}