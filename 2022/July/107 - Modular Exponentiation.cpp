#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long fastpow(long long b, long long p) {
    if (!p) return 1;
    long long ret = fastpow(b, p >> 1);
    ret *= ret;
    if (p & 1) ret *= b;
    return ret;
}
int main () {
    pre;
    int n,m;cin>>n>>m;
    if(n<=40)cout<<m%fastpow(2,n);
    else cout<<m;
}