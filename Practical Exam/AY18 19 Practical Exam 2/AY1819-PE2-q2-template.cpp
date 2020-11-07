#include <iostream>
#include <string>

using namespace std;

string reveal( string& original )
{
    char prev;
    int repeat = 1; 
    string newstr;

    for (int i = 0; i < original.size(); i++)
    {
        if (i == 0) prev = original[i];
        else
        {
            if (original[i] == prev)
            {
                repeat ++;
            }
            else if (original[i] != prev && repeat == 1)
            {
                newstr += (original[i]);  
                prev = original[i];    
            }
            else
            {
                newstr += (original[i] + repeat);    
                repeat = 1;
                prev = original[i];        
            }
        }  
    }
    return newstr;

}

int main()
{

    //for student version
    string s = "aaA!!!!Bbc";
    // string s = "**AAAB";

    cout << reveal(s) << endl;

    return 0;
} 
