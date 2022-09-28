#include <iostream>
using namespace std;
int main(){
int day[]={31,28,31,30,31,30,31,31,30,31,30,31};
int d,m,y;
cin>>d>>m>>y;
if(m==12 && d==31)
 cout<<1<<" "<<1<<" "<<y+1;
 else if(d==day[m-1]) 
 cout<<1<<" "<<m+1<<" "<<y;
 else cout<<d+1<<" "<<m<<" "<<y;
}