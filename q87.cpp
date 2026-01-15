
// 87. Program demonstrating protected inheritance.
#include <iostream>
using namespace std;

class a { protected: int x = 10; };
class b : protected a { public: void f() { cout << x; } };

int main() {
    b res;
    res.f();
    return 0;
}