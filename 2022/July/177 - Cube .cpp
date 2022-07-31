// https://codeforces.com/group/fazmoAU2Rw/contest/101853/problem/H
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        n/=6;
        n=sqrt(n);
        cout<<n<<"\n";
    }

}