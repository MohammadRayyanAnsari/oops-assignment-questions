

// 98. Program demonstrating runtime polymorphism.
#include <iostream>
using namespace std;

class a { public: virtual void f() { cout << "A"; } };
class b : public a { public: void f() { cout << "B"; } };

int main() {
    a *p; b res;
    p = &res;
    p->f();
    return 0;
}
