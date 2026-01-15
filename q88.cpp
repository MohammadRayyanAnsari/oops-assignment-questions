// 88. Program to access base class members using derived class.
#include <iostream>
using namespace std;

class a { public: void f() { cout << "Base"; } };
class b : public a {};

int main() {
    b res;
    res.f();
    return 0;
}