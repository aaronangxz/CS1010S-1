#include <iostream>
#include <vector>

using namespace std;

bool find(int x, vector<int> v) 
{
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
           count += 1;
        }
    }
    
    if ( count > 0 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main (void)
{
    int testcase1 = find(1, vector<int>{5, 2, 6, 1, 3, 7});
    cout << "Output: " << testcase1 << endl;
    int testcase2 = find(7, vector<int>{5, 2, 6, 1, 3, 7});
    cout << "Output: " << testcase2 << endl;
    int testcase3 = find(0, vector<int>{5, 2, 6, 1, 3, 7});
    cout << "Output: " << testcase3 << endl;
}