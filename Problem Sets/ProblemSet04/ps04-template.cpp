#include <iostream>
#include <string>
#include <vector>

using namespace std;

//--------//
// TASK 1 //
//--------//

char shift_char(char c, int n) {

}


string & rotate(string &s, int n) 
{
    string new_s;
    int len = s.length();
    n %= len;

    if (n > 0)
    {
        for (int i = n; i < len; i++)
        {
            new_s.push_back(s[i]);
        }
        for (int i = 0; i < n; i++)
        {
            new_s.push_back(s[i]);
        }
    }
    else
    {
        for (int i = len + n; i < len; i++)
        {
            new_s.push_back(s[i]);
        }
        for (int i = 0; i < len + n - 1; i++)
        {
            new_s.push_back(s[i]);
        }
    }
    return new_s;
}



//--------//
// TASK 2 //
//--------//

string & caeser(string &s, int n) 
{
 
    
}



//--------//
// TASK 3 //
//--------//

string & substitute(string &s, const string key) {

}


string & unsubstitute(string &s, const string key) {

}



//--------//
// TASK 4 //
//--------//


string & vigenere(string &s, vector<int> key) {

}


string & unvigenere(string &s, vector<int> key) {
    
}



//--------//
// TASK 5 //
//--------//

void freq(string s) {

}



// Main Function
int main(void) {
    string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit!";
    string key = "phqgiumeaylnofdxjkrcvstzwb";
    vector<int> vkey = {7, 5, -6, 22, -13, 6};

    // Uncomment to test the different functions
    // cout << shift_char('c', 2) << endl;
    // cout << shift_char('c', -2) << endl;

    cout << rotate(text, 3) << endl;
    cout << rotate(text, -3) << endl;

    // cout << caeser(text, 3) << endl;
    // cout << caeser(text, -3) << endl;

    // cout << substitute(text, key) << endl;
    // cout << unsubstitute(text, key) << endl;

    // cout << vigenere(text, vkey) << endl;
    // cout << unvigenere(text, vkey) << endl;

    // freq(text);

    return 0;
}