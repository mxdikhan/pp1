#include <iostream>
using namespace std;

void print_reverse(int a[], int n){
    for(int i = n- 1; i >= 0; i--){
        cout << a[i] << " ";
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    print_reverse(a, n);

}