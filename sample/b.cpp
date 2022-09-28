#include<iostream>

using namespace std;

int n, m;
char a[10][10];

void step(int i, int j)
{
    if(i < 0 || j < 0 || i >= n || j >= m || a[i][j] == '+' || a[i][j] == '#')
    {
        return;
    }
    a[i][j] = '+';
    step(i + 1, j);
    step(i - 1, j);
    step(i, j + 1);
    step(i, j - 1);
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    step(0, 0);
    if(a[n-1][m-1] == '+') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}