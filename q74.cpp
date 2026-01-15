// 74. Program with constant member function.
#include <iostream>
using namespace std;

class a { public: void f() const { cout << "Readable"; } };

int main() {
    a res;
    res.f();
    return 0;
}