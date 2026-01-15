// 42. Program with private and public members.
#include <iostream>
using namespace std;

class a {
    int b;
public:
    void s() { cout << "Enter data: "; cin >> b; }
    void g() { cout << "Data: " << b; }
};

int main() {
    a res;
    res.s();
    res.g();
    return 0;
}