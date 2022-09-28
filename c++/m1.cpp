#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "n, m: ";
    cin >> n >> m;

    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << endl;

    int k;
    cout << "k: ";
    cin >> k;
    int pr;
    int sum;
    for(int i=1; i<n; i+=2)
       pr=1;
       sum = 0;
       for(int j=0; j<m; j++)
      {
           cout << a[i][j] << " ";
           pr *=a[i][j];
           sum += a[i][j];
       }
       cout << "pr=" << pr << "  " << "sum=" << sum << " " << sum/double(m) << endl;
    }

    return 0;
}
