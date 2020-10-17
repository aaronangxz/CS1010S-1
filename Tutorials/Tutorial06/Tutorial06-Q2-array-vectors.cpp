#include <iostream>
#include <vector>

using namespace std;

char * capitalize(char *s) 
{ 
    for (int i = 0; s[i]; i++)
        if ('a' <= s[i] and s[i] <= 'z') 
            s[i] -= 32;
    return s; 
}

void capitalize(vector<char> s) 
{
    for (int i = 0; i < s.size(); i++)
        if ('a' <= s[i] and s[i] <= 122) 
            s[i] -= 32;
}

int main(void)
{

vector <string> vecstr = {"Hello World!"}, new_vecstr;


// printf("C-string: %s\n", cstring);
// printf("New C-string: %s\n", new_cstr);
// cout << "vector string " << stdstring << endl;
// cout << "New std::string: " << new_stdstr << endl;
}