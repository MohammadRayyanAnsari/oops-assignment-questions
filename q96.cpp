// 96. Program demonstrating function overloading.
#include <iostream>
using namespace std;

class a {
public:
    void f(int x) { cout << x; }
    void f(double x) { cout << x; }
};

int main() {
    a res;
    res.f(5);
    res.f(5.5);
    return 0;
}
