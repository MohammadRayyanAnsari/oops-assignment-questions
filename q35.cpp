// 35. Program for matrix addition.
#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], res[2][2];
    cout << "Enter Matrix 1: ";
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) cin >> a[i][j];
    cout << "Enter Matrix 2: ";
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) cin >> b[i][j];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res[i][j] = a[i][j] + b[i][j];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}