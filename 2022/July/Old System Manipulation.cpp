#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main ()
{
    pre;
    int n,m;cin>>n>>m;
    ll sum=0;
    for(int i = 0 ; i < n ; i++)
    {
        int h;cin>>h;
        sum+=h;
    }
    if(sum<=m)cout<<sum;
    else cout<<m;
}