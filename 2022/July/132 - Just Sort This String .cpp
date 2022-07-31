#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    string y,x;
    cin>>y>>x;
    unordered_map<char,int>mp;
    for(int i = 0 ; i < x.size() ; i++)
    {
        mp[x[i]]++;
    }
    for(int i=0 ; i < y.size() ; i++)
    {
        while(mp[y[i]]>0)
        {
            cout<<y[i];
            mp[y[i]]--;
        }
    }
}