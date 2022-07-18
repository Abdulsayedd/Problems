#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    int mx=INT_MIN,n;
    for(int i = 0 ; i < 3 ; i++)
    {
        cin>>n;
        mx=max(mx,n);
    }
    cout<<mx;
}