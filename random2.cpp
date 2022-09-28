#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    int b,ans,rev=0,rev1=0;
    bool answer=false;
    cin>>x;
    for(int i=0;i<x.size();i++){
        b=i;
        while(x[i]!='.'){
            i++;   
            rev++;        
        }
        if(x[i]=='.'){           
           rev1=stoi(x.substr(b,rev));
           
           if(rev1<=255 && rev1>=0){
               answer=true;
           }
        }
        if(answer==false){
            cout<<"0"<<endl;
            return 0;
        }
        answer=false;
        rev=0;
    }
    cout<<"1";
}