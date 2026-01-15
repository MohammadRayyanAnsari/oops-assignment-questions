// 79. Program demonstrating information hiding.
#include <iostream>
using namespace std;

class a {
    int v;
public:
    void s(int x) { v = x; }
    int g() { return v; }
};

int main() {
    a res;
    res.s(50);
    cout << res.g();
    return 0;
}
