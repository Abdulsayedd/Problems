//https://codeforces.com/group/XGW5NIn8kq/contest/326459/problem/D
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main ()
{
    pre;
    ll a,b;cin>>a>>b;
    if(a==b)cout<<0;
    else
    cout<<abs(a-b)<<" "<<(a<b?"L":"R");
}