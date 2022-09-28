#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){

    string s; cin >> s;
    set<char> m;
    for(char c:s){

    m.insert(tolower(c));
    
}

cout << m.size() << endl;
for (auto n:m) cout << n << " ";




}