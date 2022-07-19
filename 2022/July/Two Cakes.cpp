//https://codeforces.com/group/UZxBcPr4qR/contest/248772/problem/E
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,h;cin>>n;
    n*=2;
    map<int,pair<int,int>>mp;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>h;
        if(mp[h].first)mp[h].second=i;
        else mp[h].first=i;
    }
    long long sum{};
    sum+=mp[1].first+mp[1].second;
    for(int i = 1 ; i < n/2 ; i++)
    {
        //cout<<i<<" "<<mp[i].first<<" "<<mp[i].second<<"\n";
        sum+=min(abs(mp[i].first-mp[i+1].first)+abs(mp[i].second-mp[i+1].second),abs(mp[i].second-mp[i+1].first)+abs(mp[i].first-mp[i+1].second));
    }
    cout<<sum<<"\n";
}