
#include<iostream>

using namespace std;


int positive(int n) {
    if (n < 0) {
        return -n;
    }

    return n;
}

int main() {
    int n; cin >> n;

    cout << positive(n) << endl;
}