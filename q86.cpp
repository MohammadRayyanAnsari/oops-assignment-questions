
// 86. Program demonstrating private inheritance.
#include <iostream>
using namespace std;

class a { public: int x = 5; };
class b : private a { public: void f() { cout << x; } };

int main() {
    b res;
    res.f();
    return 0;
}