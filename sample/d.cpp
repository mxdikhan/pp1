#include<iostream>

using namespace std;

int main()
{
    int n;
    char c;

    bool flag = false;
    for(int i=0; i<4; i++)
    {
        cin >> n;

        if(i != 3) {
            cin >> c;
        }
        if(0 <= n && n <= 255) {
            continue;
        } else {
            flag = true;
        }
    } 

    if(flag == true) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}