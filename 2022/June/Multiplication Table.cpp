#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    //freopen ("sss.in","r", stdin);
    pre;
    int n,m,c=0;cin>>n>>m;
    for(int i = 1 ; i <= n ;i++)
        if(m%i==0 && m/i<=n)c++;
    cout<<c;
}