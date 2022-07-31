// https://codeforces.com/group/UZxBcPr4qR/contest/249261/problem/C
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        n==2?cout<<5:n==5?cout<<2:cout<<n;
        cout<<"\n";
    }
}