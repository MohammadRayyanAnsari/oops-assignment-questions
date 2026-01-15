
// 62. Program to differentiate local & member variables using this.
#include <iostream>
using namespace std;

class a {
    int v;
public:
    void f(int v) { this->v = v; cout << this->v; }
};

int main() {
    a res;
    res.f(10);
    return 0;
}
