#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    set<int> s;
    int n,v;cin>>n;
    for (int i=0;i<n;i++){
        cin>>v;
        s.insert(v);
    }
    for(set<int>::iterator itr=s.begin();itr!=s.end();){
        if(!(*itr%2)) s.erase(itr++);
        else ++itr;
    }
    for(auto v : s)cout<<v<<" ";
}