// 76. Program implementing ADT Queue.
#include <iostream>
using namespace std;

class a {
    int q[5], f = 0, r = 0;
public:
    void e(int v) { q[r++] = v; }
    void d() { cout << q[f++]; }
};

int main() {
    a res;
    res.e(5);
    res.d();
    return 0;
}