#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,m;cin>>n>>m;
    int ans=1;
    for(int i = 1 ; i<=min(n,m);i++)ans*=i;
    cout<<ans;

}