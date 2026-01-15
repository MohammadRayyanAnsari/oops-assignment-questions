// 65. Program with friend class.
#include <iostream>
using namespace std;

class a {
    int v = 5;
    friend class b;
};
class b {
public:
    void f(a x) { cout << x.v; }
};

int main() {
    a m; b res;
    res.f(m);
    return 0;
}