
// 29. Program demonstrating break and continue.
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue;
        cout << i << " ";
    }
    return 0;
}