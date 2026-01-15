// 94. Program using inheritance for student mark processing.
#include <iostream>
using namespace std;

class a { public: int m; };
class b : public a { public: void f() { cout << "Mark: " << m; } };

int main() {
    b res;
    cout << "Enter mark: "; cin >> res.m;
    res.f();
    return 0;
}
