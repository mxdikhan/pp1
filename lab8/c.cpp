#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec;
    
    int n,v;
    cin>>n;
     
     for(int i=0;i<n;i++){
        cin>>v;
        vec.push_back(v);
    }
     int a,b;
    cin>>a>>b;
     
     reverse(vec.begin()+a, vec.begin()+b+1);
    for(auto v: vec) cout<<v<<" ";
}