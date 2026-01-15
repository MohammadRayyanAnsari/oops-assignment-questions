
// 66. Program to overload operators using friend function.
#include <iostream>
using namespace std;

class a {
    int v;
public:
    a(int x) : v(x) {}
    friend int operator+(a x, a y);
};
int operator+(a x, a y) { return x.v + y.v; }

int main() {
    a m(1), n(2);
    cout << m + n;
    return 0;
}