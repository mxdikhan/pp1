#include <iostream>

using namespace std;

int main()
{
    int x, y, z; 
    cin >> x >> y >> z;

    if(((x + y) > z) && ((y + z) > x) && ((x + z) > y))
    {
        cout << "Valid";
    }else
        {
            cout << "Invalid";
        }

    return 0;
}