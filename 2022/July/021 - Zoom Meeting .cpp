#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool sortbysec(const pair<string,int> &a,
               const pair<string,int> &b)
{
    return (a.second > b.second);
}
int main ()
{
    pre;
    int t;cin>>t;
    map<string,int>mp;
    while(t--)
    {
       string x;cin>>x;
       mp[x]++;
    }
    int c=0;
    vector<pair<string,int>>v;
    for(auto i : mp)
    {
        c++;
        v.push_back({i.first,i.second});
        if(c==5)break;
    }
    sort(v.begin(),v.end(),sortbysec);
    for(auto i : v)cout<<i.first<<" "<<i.second<<"\n";
}