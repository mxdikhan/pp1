#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> nums;
    int n,v;cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        nums.insert(v);
    }
    cout<<nums.size();
}