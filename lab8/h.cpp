#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vec;
    int n,v;cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        vec.push_back(v);
    }
    sort(vec.begin(),vec.end());
    int k;cin>>k;
    for(int i=0;i<k;i++){
        cout<<vec[i]<<" ";
    }
}
