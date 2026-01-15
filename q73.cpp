
// 73. Program with constant object.
#include <iostream>
using namespace std;

class a { public: void f() const { cout << "Const Obj"; } };

int main() {
    const a res;
    res.f();
    return 0;
}
