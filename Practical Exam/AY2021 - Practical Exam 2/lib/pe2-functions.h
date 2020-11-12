#include <iostream>
#include <vector>

using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "{";
    auto begin = v.begin(), end = v.end();
    if (begin != end) os << *begin++;
    while (begin != end) os << ", " << *begin++;
    os << "}";
    return os;
}
/*******************************************************************/

template<typename T>
vector<T> concat(vector<T> v1, vector<T> v2) {
    v1.insert(v1.end(), v2.begin(), v2.end());
    return v1;
}