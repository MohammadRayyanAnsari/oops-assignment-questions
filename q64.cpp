
// 64. Program with two classes and a common friend function.
#include <iostream>
using namespace std;

class b;
class a {
    int v = 10;
    friend void f(a, b);
};
class b {
    int v = 20;
    friend void f(a, b);
};
void f(a x, b y) { cout << x.v + y.v; }

int main() {
    a m; b n;
    f(m, n);
    return 0;
}
