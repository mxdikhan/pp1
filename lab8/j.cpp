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
    int a=0,b;
    b=s[0];
    for(int i=0;i<n;i++){
        if(s[i]>a) a=s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]<b) b=s[i];
    }
    
    cout<<a-b;
}