#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    long long n,m;cin>>n>>m;
    if(m-n>=10)cout<<0;
    else if(m==n)cout<<1;
    else
    {
        long long ans=1;
        for(long long i = n+1 ; i <= m ; i++)
        {
            ans*=(i%10);
        }
        cout<<ans%10;
    }
}