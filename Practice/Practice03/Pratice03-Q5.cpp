#include <iostream>
#include <math.h>

using namespace std;

double leibniz_pi(int n) {
    int i = 0;
    double sum = 0;
 
    for(i = 0; i <= n - 1 ; i++)
    {
    sum += double(pow(-1,i)/(2 * i + 1)) * 4;
    }
    
 return sum;
}

int main(void) {
    double testcase1 = leibniz_pi(1);
    double testcase2 = leibniz_pi(9);
    double testcase3 = leibniz_pi(100);
    double testcase4 = leibniz_pi(1000);
    cout << "Test case 1: " << testcase1 << endl;
    cout << "Test case 2: " << testcase2 << endl;
    cout << "Test case 3: " << testcase3 << endl;
    cout << "Test case 4: " << testcase4 << endl;
    return 0;
}