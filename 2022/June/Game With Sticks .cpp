#include <bits/stdc++.h>
#define testcase int t;cin>>t;while(t--)
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    //freopen ("tank.in","r", stdin) ;
    pre;
    int n,m;cin>>n>>m;
    if(min(n,m)%2==0)cout<<"Malvika";
    else cout<<"Akshat";
}