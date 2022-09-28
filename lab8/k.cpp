#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vec;
    int n,v;cin>>n;
    for (int i=0;i<n;i++){
        cin>>v;
        vec.push_back(v);
    }
    sort(vec.begin(),vec.end(),greater<int>());
    int k,sum=0;cin>>k;
    for(int i=0;i<k;i++){
        sum+=vec[i];
    }
    cout<<sum;
}