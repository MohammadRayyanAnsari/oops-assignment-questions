// 70. Program using friend to swap private values.
#include <iostream>
using namespace std;

class a {
    int v;
public:
    a(int x) : v(x) {}
    friend void f(a&, a&);
    void g() { cout << v << " "; }
};
void f(a &x, a &y) { int t = x.v; x.v = y.v; y.v = t; }

int main() {
    a m(10), n(20);
    f(m, n);
    m.g(); n.g();
    return 0;
}
