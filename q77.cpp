
// 77. Program implementing ADT Linked List (basic).
#include <iostream>
using namespace std;

struct n { int d; n* x; };

int main() {
    n* res = new n;
    res->d = 1;
    cout << res->d;
    return 0;
}
