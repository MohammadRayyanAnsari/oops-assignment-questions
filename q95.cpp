// 95. Program using inheritance for employee-payroll.
#include <iostream>
using namespace std;

class a { public: float s; };
class b : public a { public: void f() { cout << "Salary: " << s; } };

int main() {
    b res;
    cout << "Enter salary: "; cin >> res.s;
    res.f();
    return 0;
}
