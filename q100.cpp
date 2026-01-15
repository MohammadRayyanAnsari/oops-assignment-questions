
// 100. Program with pure virtual function & abstract class.
#include <iostream>
using namespace std;

class a { public: virtual void f() = 0; };
class b : public a { public: void f() { cout << "Implemented"; } };

int main() {
    b res;
    res.f();
    return 0;
}