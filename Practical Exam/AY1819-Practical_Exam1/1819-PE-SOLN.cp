#include <iostream>

using namespace std;

// Returns true if the positive integer n contains the
// digit d (ignoring leading 0s).
bool contains_digit(int n, int d) {
    while (n > 0) {
        if (n%10 == d)
            return true;
        n /= 10;
    }
    return false;
}


// Returns true if the positive integer n contains
// a pair of consecutive digits (ignoring leading 0s)
bool contains_double(int n) {
    while (n > 10) {
        if ((n % 100) % 11 == 0)
            return true;
        n /= 10;
    }
    return false;
}


void play(int d, int start, int end) {
    for (int i = start; i <= end; i++) {
        if (i%d == 0 && contains_digit(i, d)) {
            cout << "Double-Up!" << endl;
        } else if (i%d == 0 || contains_digit(i, d)) {
            cout << d << "-Up!" << endl;
        } else {
            cout << i << endl;
        }
    }
}


int simulate(int start_population, int end_generation, int G, int K)
{
    int current = start_population;
    int i, kill;

    for (i = 1; i <= end_generation; i++){
        
        kill = 0;

        if (i % G == 0){
            kill = current * K / 100.0;
        }

cout << i << " & " << current << " & ";
cout << kill << " & ";

        current -= kill;
        current *=2;

cout << current << "\\\\\n";
    }

    return current;
}

int main() {
    cout << contains_digit(12345, 2) << endl;
    cout << contains_digit(12345, 0) << endl;

    cout << contains_pair(12345) << endl;
    cout << contains_pair(1500352) << endl;

    play(7, 1, 100);

    cout << "** simulate(50, 10, 3, 10 )" << endl;
    cout << simulate(50, 10, 3, 10 ) << endl;

    cout << "** simulate(1, 20, 1, 50 )" << endl;
    cout << simulate(1, 20, 1, 50 ) << endl;

    cout << "** simulate(100, 8, 4, 90 )" << endl;
    cout << simulate(100, 8, 4, 90 ) << endl;



    cout << "** simulate(10, 50, 12, 100 )" << endl;
    cout << simulate(10, 50, 12, 100 ) << endl;
}
