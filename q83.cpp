// 83. Program for multiple inheritance.
#include <iostream>
using namespace std;

class a { public: int x = 1; };
class b { public: int y = 2; };
class c : public a, public b { public: void f() { cout << x + y; } };

int main() {
    c res;
    res.f();
    return 0;
}
