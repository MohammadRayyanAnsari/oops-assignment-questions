// 51. Program with default constructor.
#include <iostream>
using namespace std;

class a {
public:
    a() { cout << "Constructor ran"; }
};

int main() {
    a res;
    return 0;
}
