// https://codeforces.com/group/UZxBcPr4qR/contest/249261/problem/G
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,m=0,h;cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>h;
        m+=h;
    }
    cout<<(m?"HARD":"EASY")<<"\n";
}