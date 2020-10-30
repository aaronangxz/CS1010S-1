#include <iostream>
#include <string>

using namespace std;

string reveal( string& original )
{
    string result;
    char hold;
    int i, repeat;

    for (i=1, hold = original[0], repeat = 0; i < original.length(); i++){
//cout << "Str[" << i << "] = " << original[i] << " | hold: " << hold;
//cout << " | R: " << repeat  << endl; 
        if (original[i] == hold){
            repeat++;
        } else {
            if (repeat == 0){
                result.push_back(hold);
            } else {
                result.push_back( original[i] + repeat + 1);
                i++;
            }
            if (i < original.length()){
                hold = original[i];
                repeat = 0;
            }

       }
    }

    if (repeat == 0)
        result.push_back( hold );

    return result;
}

int main()
{

    //for testing only
    string s;
    cin >> s;

    //for student version
    //string s = "aaA***ABC&&&&&f   A";

    cout << reveal(s) << endl;

    return 0;
} 
