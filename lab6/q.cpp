#include<iostream>

using namespace std;


double perc(int n, int a) {
    return 100 * a * 1.0 / n;
}

int main() {
    int n, a; cin >> n >> a;

    cout << perc(n, a) << endl;
}