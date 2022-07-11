// Problem     : B. Two Buttons , https://codeforces.com/problemset/problem/520/B/
// Author      : Abdulsayed
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
        int n,m;cin>>n>>m;
        int c=0;
        bool f;
        while(n!=m)
        {
            f=!(m&1) && m>n;
            f?m>>=1:m++;
            c++;
        }
        cout<<c;
}

