#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

// return hypothenuse length of right trinangle with sides a and b
double hypo(int a, int b) {
    return sqrt(a * a + b * b);
}


int main() {
    int a, b; cin >> a >> b;

    cout << setprecision(4) << hypo(a, b) << endl;
}