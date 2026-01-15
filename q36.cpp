// 36. Program for matrix multiplication.
#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], res[2][2] = {0};
    cout << "Enter Matrix A: ";
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) cin >> a[i][j];
    cout << "Enter Matrix B: ";
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) cin >> b[i][j];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) res[i][j] += a[i][k] * b[k][j];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}