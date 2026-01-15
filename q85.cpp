
// 85. Program for hybrid inheritance.
#include <iostream>
using namespace std;

class a { public: int x = 1; };
class b : public a {};
class c { public: int y = 2; };
class d : public b, public c { public: void f() { cout << x + y; } };

int main() {
    d res;
    res.f();
    return 0;
}