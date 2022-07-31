// Problem     : A. Marathon , https://codeforces.com/contest/1692/problem/A
// Author      : Abdulsayed
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt=0;
        b>a?cnt++:cnt;
        c>a?cnt++:cnt;
        d>a?cnt++:cnt;
        cout<<cnt<<"\n";
    }

}

