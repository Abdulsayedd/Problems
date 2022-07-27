//https://codeforces.com/group/XGW5NIn8kq/contest/326459/problem/B
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main ()
{
    pre;
    ll n,k;cin>>n>>k;
    if(n&&n%k==0)cout<<0;
    else if(n<k)cout<<k-n;
    else cout<<k-n%k;
}