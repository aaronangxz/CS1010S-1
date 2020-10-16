#include <iostream>

using namespace std;

void h(int& i) 
{
    i = 33; // point α
}

void g(int* i) 
{ 
    *i = 22;
    h( *i );
}

void f(int i) 
{ 
    i = 11;
    g( &i ); 
}

int main() 
{ 
    int i = 0;
    f( i ); 
    cout << i;
}