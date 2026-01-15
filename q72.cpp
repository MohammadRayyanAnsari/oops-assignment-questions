// 72. Program with static member function.
#include <iostream>
using namespace std;

class a { public: static void f() { cout << "Static"; } };

int main() {
    a::f();
    return 0;
}
