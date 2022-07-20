// https://codeforces.com/group/80CtVHJnEO/contest/205918/problem/D
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,floors;cin>>n>>floors;
    vector<pair<int,int>>v;
    pair<int,int>p;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>p.first>>p.second;
        v.push_back(p);
    }
    sort(v.rbegin(),v.rend());
    long long t=0;
    int now=floors;
    for(int i=0;i<v.size();i++)
    {
        t+=now-v[i].first;
        //cout<<t<<"\n";
        now=v[i].first;
        if(t<v[i].second)t+=(abs(v[i].second-t));
    }
    t+=now;
    cout<<t;
}