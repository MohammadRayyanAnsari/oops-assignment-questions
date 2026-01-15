// 45. Program to perform arithmetic operations using class.
#include <iostream>
using namespace std;

class a {
public:
    void f() { 
        int x, y; 
        cout << "Enter two numbers: "; cin >> x >> y;
        cout << "Sum: " << x + y; 
    }
};

int main() {
    a res;
    res.f();
    return 0;
}
