// https://codeforces.com/contest/706/problem/B
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int n,m;cin>>n;m=n;
    vector<int>arr(n);
    map<long long,int>mp;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    long long q,h,ans;cin>>q;
    while(q--)
    {
        cin>>h;
        ans=lower_bound(arr.begin(),arr.end(),h)-arr.begin();
        if(mp[h])ans+=mp[h];
        cout<<ans<<"\n";
    }
}