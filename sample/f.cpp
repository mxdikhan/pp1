#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    bool flag = true;
    for(int i=0; i<n; i++) 
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = false;
            }
        }
    }

    if(flag == false) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}