#include<iostream>
using namespace std;
void ans(string s, int cnt)
{
    string t = "";
    int sum = 0;

    if(s.size() == 1) {
        cout << s << " " << cnt << endl;
        return;
    }
    cnt++;
    for(int i=0; i<s.size(); i++) {
        sum += (s[i] - 48);
    }
    t = to_string(sum);
    ans(t, cnt);
}
int main()
{
    string s;
    cin >> s;
    ans(s, 0);
    return 0;
}