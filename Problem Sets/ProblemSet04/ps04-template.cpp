#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

//--------//
// TASK 1 //
//--------//

char shift_char(char c, int n) 
{
    bool isLower = (c >= 'a' && c <= 'z')? 1 : 0 ;
    c += n >= 0 ? n % 26 : n < 0 ? - (abs(n) % 26) : 0;
    
    while (isLower)
    {
        c +=  c < 'a' ? 26 :  c > 'z' ? - 26 : 0;
        break;
    }
    while (!isLower)
    {
        c +=  c < 'A' ? 26 :  c > 'Z' ? - 26 : 0;
        break;
    }
    
    return c;
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
        for (int i = 0; i < len + n ; i++)
        {
            new_s.push_back(s[i]);
        }
    }
    return s = new_s;
}



//--------//
// TASK 2 //
//--------//

string & caeser(string &s, int n) 
{
    string new_s;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i])) new_s.push_back(shift_char(s[i],n));
        else new_s.push_back(s[i]);
    }
    return s = new_s;
}



//--------//
// TASK 3 //
//--------//

string & substitute(string &s, const string key) 
{
    string new_s;
    string letters = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            for (int j = 0; j < letters.size(); j++)
            {
                if (s[i] == letters[j]) new_s.push_back(key[j]);
                else if (s[i] == toupper(letters[j])) new_s.push_back(toupper(key[j]));
            }
        }
        else new_s.push_back(s[i]);
    }
    return s = new_s;
}


string & unsubstitute(string &s, const string key) 
{
    string new_s;
    string letters = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            for (int j = 0; j < letters.size(); j++)
            {
                if (s[i] == key[j]) new_s.push_back(letters[j]);
                else if (s[i] == toupper(key[j])) new_s.push_back(toupper(letters[j]));
            }
        }
        else new_s.push_back(s[i]);
    }
    return s = new_s;
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

    //Uncomment to test the different functions
    // cout << shift_char('c', 2) << endl;
    // cout << shift_char('c', -2) << endl;
    // cout << shift_char('g', 20) << endl;

    // cout << rotate(text, 3) << endl;
    // cout << rotate(text, -3) << endl;

    // cout << caeser(text, 3) << endl;
    // cout << caeser(text, -3) << endl;

    cout << substitute(text, key) << endl;
    cout << unsubstitute(text, key) << endl;

    // cout << vigenere(text, vkey) << endl;
    // cout << unvigenere(text, vkey) << endl;

    // freq(text);

    return 0;
}