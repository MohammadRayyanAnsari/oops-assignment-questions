
// 99. Program with virtual function.
#include <iostream>
using namespace std;

class a { public: virtual void f() { cout << "Base"; } };
class b : public a { public: void f() { cout << "Derived"; } };

int main() {
    a *p = new b();
    p->f();
    return 0;
}