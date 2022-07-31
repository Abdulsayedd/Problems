//https://codeforces.com/group/XGW5NIn8kq/contest/326459/problem/H
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main ()
{
    pre;
    ll n,m;cin>>n>>m;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll sum=0,c=0;
    for(int i = n-1 ; i >=0 ; i--)
    {
        sum+=arr[i];
        c++;
        if(sum>m)break;
    }
    sum<m?cout<<-1:cout<<c;
}