#include<iostream>
#include<queue>
#include<stack>
#include<map>
using namespace std;
int main(){

    stack<int> p;
    queue<pair<string, int>> c;
    map<int,int> all_p;

    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int p;
        cin >> p;
        p.push(p);
        all_p[p]++;
    }
    for(int i=0;i<n;i++){
        int c;
        cin >> c; 
        clients.push(make_pair("not",c));
    }
    c.push(make_pair("A",1));
    bool ok = false;
    int time = 0;
    while(!p.empty()){
        time++;
        if(all_p[1] == 0) //1  
            break;// 1T 0 
        if(p.top() == 1 && c.front().first == "A"){
            ok = true;
            break;
        }else if(p.top() == c.front().second && c.front().first == "not"){
            c.pop();
            all_p[p.top()] --;
            p.pop();
        }else{
            pair<string,int> pr = clients.front();
            c.pop();
            c.push(pr);
        }
    }
    if(ok){
        cout<<"YES\n";
        if(time>m)
            cout<<"Che?\n";
    }else{
        cout<<";(\n";
    }
    
}


