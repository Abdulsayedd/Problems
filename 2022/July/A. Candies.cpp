//============================
// Name        : A. Candies
// Author      : Abdulsayed
// Version     : 2022
// Description : BitWise
// Link        : https://codeforces.com/problemset/problem/1343/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    long long t;cin>>t;
    while(t--)
    {
       int n,m;cin>>n;
       for(int i = 2 ; i <= n ; i++)
       {
           m=(1<<i)-1;
           if(!(n%m)){cout<<n/m<<"\n";break;}
       }
    }
}