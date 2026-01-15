// 52. Program with parameterized constructor.
#include <iostream>
using namespace std;

class a {
public:
    a(int x) { cout << "Val: " << x; }
};

int main() {
    int v;
    cout << "Enter val: "; cin >> v;
    a res(v);
    return 0;
}
