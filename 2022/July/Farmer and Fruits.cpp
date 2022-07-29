#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
const ll mod=1000000007;

int main (){
    pre;
    int arr[5];
    for(int i = 0 ; i < 5 ; i ++)
    {
        cin>>arr[i];
    }
    ll n;cin>>n;
    map<ll,ll>mp;
    for(int i = 0 ; i < n ; i++)
    {
        ll h;cin>>h;
        mp[h]++;
    }
    ll mx=0;
    for(auto i : mp)
    {
        //cout<<i.first<<" "<<i.second<<"\n";
        mx=max(mx,i.second*arr[i.first-1]);
    }
    cout<<mx;
}