// 41. Program defining a simple class and creating objects.
#include <iostream>
using namespace std;

class a {
public:
    void f() { cout << "Object working"; }
};

int main() {
    a res;
    res.f();
    return 0;
}