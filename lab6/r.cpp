#include<iostream>

using namespace std;


char upper(char c) {
    if ('a' <= c && c <= 'z') {
        return c - 32;
    }

    return c;
}

int main() {
    char c; cin >> c;

    cout << upper(c) << endl;
}