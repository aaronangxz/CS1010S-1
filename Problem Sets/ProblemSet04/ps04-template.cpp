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
    //Determine upper / lower case
    bool isLower = (c >= 'a' && c <= 'z')? 1 : 0 ;
    
    //Lower case
    if (isLower)
    {
        //When the place to shift is positive, i.e. moves forward,
        //Compute distance of c from 'a' + distance to shift n, 
        //% 26 to prevent number from going beyond 'a' - 'z', will get the distance required to move from 'a'
        //and finally add 'a' to get the final shifted position.
        if (n >= 0) c =('a' + (c - 'a' + n) % 26);
        else if (n < 0)
        {
            c =((c - 'a') + n);
            //Extra steps due to modulus of negative numbers
            c = (c < 0) ? 'a' +  26 + (c % 26) : 'a' + c % 26;
        }
    }
    //Upper case
    else
    {
        if (n >= 0) c =('A' + (c - 'A' + n) % 26);
        else if (n < 0)
        {
            c =((c - 'A') + n);
            c = (c < 0) ? 'A' +  26 + (c % 26) : 'A' + c % 26;
            // if (c < 0) c = 'A' +  26 + (c % 26);
            // else c = 'A' + c % 26;
        }
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
        //When current char is an alphabet, shift position by n,
        //then save shifted char to new string 
        if (isalpha(s[i])) new_s.push_back(shift_char(s[i],n));
        //otherwise save original char to new string
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
        //when current char is an alphabet
        if (isalpha(s[i]))
        {
            for (int j = 0; j < letters.size(); j++)
            {
                //Look for corresponding letters to match in sorted alphabet array,
                //If yes, note down the index number,(Since keys are substituted following a->p, b->h, c->q...)
                //Locate said index number in key array, and save to new string
                if (s[i] == letters[j]) new_s.push_back(key[j]);
                //Do the same for caps letters
                else if (s[i] == toupper(letters[j])) new_s.push_back(toupper(key[j]));
            }
        }
        //save original char to string
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
        //when current char is an alphabet
        if (isalpha(s[i]))
        {
            for (int j = 0; j < letters.size(); j++)
            {
                //Look for corresponding letters to match with keys,
                //If yes, note down the index number,
                //Locate said index number in sorted alphabets array, and save to new string
                if (s[i] == key[j]) new_s.push_back(letters[j]);
                //Do the same for caps letters
                else if (s[i] == toupper(key[j])) new_s.push_back(toupper(letters[j]));
            }
        }
        //save original char to string
        else new_s.push_back(s[i]);
    }
    return s = new_s;
}

//--------//
// TASK 4 //
//--------//

string & vigenere(string &s, vector<int> key) 
{
    string new_s;
    //Starts from 1 to facilitate modulus operations
    for (int i = 1; i <= s.size(); i++)
    {
        //Check is char is an alphabet
        // i-1 because i started from 1
        if (isalpha(s[i-1]))
        {
            //n is the index of char in string
            int n = i;
            //When n exceeds size of key array
            while (n > key.size())
            {
                //Wrap around key array
                n %= key.size();
                if (n <= 0) n = key.size() ;
            }
            //retrieve places to shift from key array
            int keyy = key[n-1];
            //Save shifted char to new string
            new_s.push_back(shift_char(s[i - 1],keyy));
        }
        //When it is not an alphabet
        else 
        {
            //Save original char to new string
            new_s.push_back(s[i-1]);
        }
    }
    return s = new_s;
}

string & unvigenere(string &s, vector<int> key) 
{
    string new_s;
    //Starts from 1 to facilitate modulus operations
    for (int i = 1; i <= s.size(); i++)
    {
        //Check is char is an alphabet
        // i-1 because i started from 1
        if (isalpha(s[i-1]))
        {
            //n is the index of char in string
            int n = i;
            //When n exceeds size of key array
            while (n > key.size())
            {
                //Wrap around key array
                n %= key.size();
                if (n <= 0) n = key.size() ;
            }
            //retrieve places to shift from key array
            int keyy = key[n-1];
            //Reverse the position back to the original char place
            //Save shifted char to new string
            new_s.push_back(shift_char(s[i - 1],-keyy));
        }
        //When it is not an alphabet
        else 
        {
            //Save original char to new string
            new_s.push_back(s[i-1]);
        }
    }
    return s = new_s;
}

//--------//
// TASK 5 //
//--------//

void freq(string s) 
{
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int count = 0, j;
    //Check each char in string s, from a / A onwards to z / Z
    for (int i = 0; i < letters.size(); i++)
    {
        //Reset counter after counting every alphabet
        count = 0;
        for (j= 0; j < s.size(); j++)
        {
            //Increment count if current letter matches current char in string,
            //regardless of upper / lower case
            count += (s[j] == letters[i] || s[j] == letters[i] - 32 ) ? 1 : 0;
        }
        //Output count for current letter
        cout << letters[i] << ":" << count << " " ;
    }
}

// Main Function
int main(void) {
    string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit!";
    string key = "phqgiumeaylnofdxjkrcvstzwb";
    vector<int> vkey = {7, 5, -6, 22, -13, 6};

    //Uncomment to test the different functions
    cout << shift_char('c', 2) << endl;
    cout << shift_char('c', -2) << endl;
    cout << shift_char('g', 20) << endl;

    cout << rotate(text, 3) << endl;
    cout << rotate(text, -3) << endl;

    cout << caeser(text, 3) << endl;
    cout << caeser(text, -3) << endl;

    cout << substitute(text, key) << endl;
    cout << unsubstitute(text, key) << endl;

    cout << vigenere(text, vkey) << endl;
    cout << unvigenere(text, vkey) << endl;

    freq(text);

    return 0;
}