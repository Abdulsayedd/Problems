#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
    long long n;cin>>n;
    long long ans=1LL*((-1 + sqrt(1 + 8 * n)) / 2);
    cout<<ans<<"\n";
    }
}