// 82. Program for multilevel inheritance.
#include <iostream>
using namespace std;

class a { public: int x = 1; };
class b : public a { public: int y = 2; };
class c : public b { public: void f() { cout << x << y; } };

int main() {
    c res;
    res.f();
    return 0;
}
