//============================
// Name        : A. The Third Three Number Problem
// Author      : Abdulsayed
// Version     : 2022
// Description : Bitwise
// Link        : https://codeforces.com/contest/1699/problem/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        !(n&1)?cout<<0<<" "<<0<<" "<<n/2<<"\n":cout<<-1<<"\n";
    }
}