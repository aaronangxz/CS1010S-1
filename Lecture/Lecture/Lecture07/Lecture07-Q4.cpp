#include <iostream>
#include <vector>

using namespace std;

bool invert(vector<bool> &v) 
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
           v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }    
}

int main (void)
{
    return 0;
}