// 81. Program for single inheritance.
#include <iostream>
using namespace std;

class a { public: int v = 1; };
class b : public a { public: void f() { cout << v; } };

int main() {
    b res;
    res.f();
    return 0;
}