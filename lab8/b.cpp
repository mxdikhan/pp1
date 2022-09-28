#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    
    vector<int> s;
    int v,n;
    cin>>n;
    
    for (int i=0;i<n;i++){
        cin>>v;
        s.push_back(v);
    }

    reverse(s.begin(),s.end());
    
    for (auto v : s)
    
    cout<<v<<" ";
}