#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];

    // fill first row and column with numbers
    for (int i = 0; i < n; ++i) {
        a[i][0] = i;
        a[0][i] = i;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            a[i][j] = a[i][0] * a[0][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }

        cout << endl;
    }
}