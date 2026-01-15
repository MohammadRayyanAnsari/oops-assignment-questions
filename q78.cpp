// 78. Program implementing ADT Polynomial.
#include <iostream>
using namespace std;

class a {
public:
    void f() { 
        int c, e; 
        cout << "Enter coeff and exp: "; cin >> c >> e;
        cout << c << "x^" << e;
    }
};

int main() {
    a res;
    res.f();
    return 0;
}
