/*
https://open.kattis.com/problems/hissingmicrophone
*/

#include <iostream>
#include <string>

using namespace std;

int main (void)
{
    string input = "";

    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 's' && input[i+1] == 's')
        {
            cout << "hiss" <<endl;
            return 0;
        }
    }
    cout << "No hiss" << endl;
    return 0;
}