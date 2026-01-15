// 48. Program to calculate area using class object.
#include <iostream>
using namespace std;

class a {
public:
    void f() {
        int l, b;
        cout << "Enter L and B: "; cin >> l >> b;
        cout << "Area: " << l * b;
    }
};
int main() {
    a res;
    res.f();
    return 0;
}
