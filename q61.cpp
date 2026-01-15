// 61. Program demonstrating this pointer.
#include <iostream>
using namespace std;

class a {
    int v;
public:
    void s(int v) { this->v = v; }
    void g() { cout << v; }
};

int main() {
    a res;
    res.s(20);
    res.g();
    return 0;
}
