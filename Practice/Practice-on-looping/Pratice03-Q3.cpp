#include <iostream>
#include <stdbool.h>

using namespace std;

int number_of_digits(int num) {
    int count = 0;
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num /= 10;
            count ++ ;
        }
    }
    return count;
}

int main(void) {
    int testcase1 = number_of_digits(0);
    int testcase2 = number_of_digits(55555);
    int testcase3 = number_of_digits(1000);
    int testcase4 = number_of_digits(1234);
    cout << "Test case 1: " << testcase1 << endl;
    cout << "Test case 2: " << testcase2 << endl;
    cout << "Test case 3: " << testcase3 << endl;
    cout << "Test case 4: " << testcase4 << endl;
    return 0;
}