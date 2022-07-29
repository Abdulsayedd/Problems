#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
const ll mod=1e9+7;
int main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        ll ans=((n+1LL)*(n+2LL)/2LL)%mod;
        ans=((ans)*(k+1LL))%mod;
        cout<<ans<<"\n";
    }
}