#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    map<string,int>mp;
    mp["yellow"]=0;mp["orange"]=1;mp["red"]=2;mp["purple"]=3;
    mp["violet"]=4;mp["blue"]=5;mp["blue-green"]=6;mp["green"]=7;
    int n;cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        string x,y;cin>>x>>y;
        cout<<min((8-abs(mp[x]-mp[y])),abs(mp[x]-mp[y]))<<"\n";
    }
}