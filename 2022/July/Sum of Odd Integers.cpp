// https://codeforces.com/problemset/problem/1327/A
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        long long n,m;cin>>n>>m;
        string ans="NO";
        if(m*m<=n && (n&1)==(m&1))ans="YES";
        cout<<ans<<"\n";
    }
}