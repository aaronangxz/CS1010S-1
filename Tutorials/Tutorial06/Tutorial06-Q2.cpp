#include <iostream>

using namespace std;

char * capitalize(char *s) 
{ 
    for (int i = 0; s[i]; i++)
        if ('a' <= s[i] and s[i] <= 'z') 
            s[i] -= 32;
    return s; 
}

string capitalize(string s) 
{
    for (int i = 0; i < s.size(); i++)
        if ('a' <= s[i] and s[i] <= 'z') 
            s[i] -= 32;
    return s; 
}

int main(void)
{
char cstring[20] = "Hello World!";
char *new_cstr;
string stdstring = "Hello World!", new_stdstr;

new_cstr = capitalize(cstring); 
new_stdstr = capitalize(stdstring);

printf("C-string: %s\n", cstring);
printf("New C-string: %s\n", new_cstr);
cout << "std::string: " << stdstring << endl;
cout << "New std::string: " << new_stdstr << endl;
}