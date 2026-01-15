
// 89. Program showing ambiguity in multiple inheritance.
#include <iostream>
using namespace std;

class a { public: void f() { cout << "A"; } };
class b { public: void f() { cout << "B"; } };
class c : public a, public b {};

int main() {
    c res;
    res.a::f();
    return 0;
}
