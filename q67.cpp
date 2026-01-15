// 67. Program to add two complex numbers using friend.
#include <iostream>
using namespace std;

class a {
    int r, i;
public:
    a(int x, int y) : r(x), i(y) {}
    friend void f(a, a);
};
void f(a x, a y) { cout << x.r + y.r << " + " << x.i + y.i << "i"; }

int main() {
    a m(1, 2), n(3, 4);
    f(m, n);
    return 0;
}