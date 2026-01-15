// 60. Program to initialize static data members.
#include <iostream>
using namespace std;

class a {
public:
    static int v;
};

int a::v = 5;

int main() {
    cout << a::v;
    return 0;
}
