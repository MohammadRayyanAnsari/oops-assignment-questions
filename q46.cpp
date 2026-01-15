// 46. Program to compare two objects.
#include <iostream>
using namespace std;

class a {
public:
    int v;
    void s() { cout << "Enter value: "; cin >> v; }
};

int main() {
    a x, y;
    x.s(); y.s();
    if (x.v == y.v) cout << "Same"; else cout << "Different";
    return 0;
}