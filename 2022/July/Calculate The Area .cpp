#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long n;cin>>n;
    if(n&1)cout<<1<<" "<<n;
    else cout<<2<<" "<<n/2;
}