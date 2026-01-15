// 49. Program demonstrating nested classes.
#include <iostream>
using namespace std;

class a {
public:
    class b {
    public:
        void f() { cout << "In side B"; }
    };
};

int main() {
    a::b res;
    res.f();
    return 0;
}