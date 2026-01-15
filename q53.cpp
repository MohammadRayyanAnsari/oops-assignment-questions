// 53. Program with multiple constructors.
#include <iostream>
using namespace std;

class a {
public:
    a() { cout << "Def "; }
    a(int x) { cout << "Param "; }
};

int main() {
    a x, y(10);
    return 0;
}