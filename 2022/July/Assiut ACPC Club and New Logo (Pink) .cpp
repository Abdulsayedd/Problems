#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    int n,m;cin>>n>>m;
    char ch;
    map<char,double>mp;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin>>ch;
            mp[ch]++;
        }
    }
    vector<string>v;
    for(auto i : mp)
    {
        cout<<i.first<<": "<<fixed<<setprecision(2)<<(i.second/(n*m))*100<<"\n";
    }
}