// 90. Program resolving ambiguity using scope resolution operator.
#include <iostream>
using namespace std;

class a { public: void f() { cout << "A"; } };
class b { public: void f() { cout << "B"; } };
class c : public a, public b {};

int main() {
    c res;
    res.b::f();
    return 0;
}