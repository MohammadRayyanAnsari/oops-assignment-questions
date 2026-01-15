// 54. Program with copy constructor.
#include <iostream>
using namespace std;

class a {
    int v;
public:
    a(int x) { v = x; }
    a(a &t) { v = t.v; cout << "Copied: " << v; }
};
int main() {
    a x(10);
    a res = x;
    return 0;
}