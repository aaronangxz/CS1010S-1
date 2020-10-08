#include <iostream>

using namespace std;

int foo(int x) 
{
    switch(x) 
    {
        case 0:
            x += 1;
        case 4:
            x /= 2;
            break;
        case 2:
            x += 3;
            break;
        case 1:
            x += 2;
        default:
            x *= 2;
    }
    return x;
}

int main (void)
{
    int testcase = foo(0);
    cout << "Testcase: " << testcase << endl;
}