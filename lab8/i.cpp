#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> s;
    int v,n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>v;
        s.push_back(v);
    }
    int a,b=0;cin>>a;
    for(int i=0;i<n;i++){
        if(s[i]==a) b++;
    }
    if(b>0)cout<<"Yes";
    else cout<<"No";
}