// 56. Program with destructor showing object destruction.
#include <iostream>
using namespace std;

class a {
public:
    ~a() { cout << "Destroyed"; }
};

int main() {
    a res;
    return 0;
}