#include <iostream>

using namespace std;

/********************
 * Q1A
 * *****************/
bool contains_digit(int n, int d) {

}


/********************
 * Q1B
 * *****************/
void play(int start, int stop, int d) {

}


/********************
 * Q1C: Bonus
 * *****************/
bool contains_double(int n) {

}



int main() {
    cout << boolalpha; // configures cout to display true/false for bool

    cout << "** Q1A **" << endl;
    cout << contains_digit(12345, 2) << endl;
    cout << contains_digit(1234567890, 0) << endl;
    cout << contains_digit(1010101, 1) << endl;
    cout << contains_digit(12345, 7) << endl;
    cout << contains_digit(987654321, 0) << endl;

    cout << endl << "** Q1B **" << endl;
    cout << endl << "** play(30, 45, 4)" << endl;
    play(30, 45, 4);

    cout << endl << "** play(690, 710, 7)" << endl;
    play(690, 710, 7);

    cout << endl << "** play(25,45, 3)" << endl;
    play(25,45, 3);

    cout << endl << "** Q1C **" << endl;
    cout << contains_double(12345)  << endl;
    cout << contains_double(123123) << endl;
    cout << contains_double(112233) << endl;
    cout << contains_double(333333) << endl;
    cout << contains_double(120021) << endl;

    return 0;
}