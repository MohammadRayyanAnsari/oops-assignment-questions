// 47. Program to find largest of two numbers using class.
#include <iostream>
using namespace std;

class a {
public:
    void f() {
        int x, y;
        cout << "Enter two: "; cin >> x >> y;
        cout << "Max: " << (x > y ? x : y);
    }
};

int main() {
    a res;
    res.f();
    return 0;
}