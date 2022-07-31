//============================
// Name        : A. New Year Candles
// Author      : Abdulsayed
// Version     : 2022
// Description : 
// Link        : https://codeforces.com/contest/379/problem/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
       int n,m;cin>>n>>m;
       int sum=n;
       while(n>=m)
       {
           sum+=(n/m);
           n=n/m+n%m;
       }
       cout<<sum<<"\n";
}