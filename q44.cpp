

// 44. Program to read and display employee details using class.
#include <iostream>
using namespace std;

class a {
    int id;
public:
    void f() { cout << "Enter ID: "; cin >> id; cout << "ID: " << id; }
};

int main() {
    a res;
    res.f();
    return 0;
}