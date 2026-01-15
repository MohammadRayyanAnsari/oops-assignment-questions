// 43. Program to demonstrate class member functions.
#include <iostream>
using namespace std;

class a {
public:
    void f();
};

void a::f() { cout << "Outside class"; }

int main() {
    a res;
    res.f();
    return 0;
}
