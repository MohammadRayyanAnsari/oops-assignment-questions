// 69. Program showing "friendship is not mutual".
#include <iostream>
using namespace std;

class a { friend class b; };
class b { public: void f() { cout << "A is friend of B"; } };

int main() {
    b res;
    res.f();
    return 0;
}
