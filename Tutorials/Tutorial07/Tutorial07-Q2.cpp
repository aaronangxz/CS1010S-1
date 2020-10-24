#include <iostream>

using namespace std;

void h(int& i) 
{
    cout << "input &i in h: " << &i << endl;
    i = 33; // point α
    cout << "i in h: " << i << endl;
}

void g(int* i) 
{ 
    cout << "input *i in g: " << *&i << endl;
    *i = 22;
    cout << "*i in g: " << *i << endl;
    h( *i );
    cout << "i in g: " << i << endl;
}

void f(int i) 
{ 
    cout << "input i in f: " << i << endl;
    i = 11;
    cout << "&i in f: " << &i << endl;
    g( &i ); 
    cout << "i in f: " << i << endl;
}

int main() 
{ 
    int i = 0;
    f( i ); 
    cout << "i in main: " << i << endl;
}