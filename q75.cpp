// 75. Program implementing Abstract Data Type (Stack).
#include <iostream>
using namespace std;

class a {
    int s[5], t = -1;
public:
    void p(int v) { s[++t] = v; }
    void g() { cout << s[t--]; }
};

int main() {
    a res;
    res.p(10);
    res.g();
    return 0;
}