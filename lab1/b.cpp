#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int n, m, k, j;
   cin >> n >> m;
   k = m%10;
   j = m/100;
   
   cout << n+k+j;

   return 0;
}