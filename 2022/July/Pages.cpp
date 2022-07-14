#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,p,k;
    cin>>n>>p>>k;
    string ans;
    if(p-k>1)ans="<< ";
    vector<int>v;
    for(int i = 1 ; i <= k ; i++)
    {
        if(p-i>0)v.push_back(p-i);
    }
    reverse(v.begin(),v.end());
    for(auto i : v)ans+= to_string(i) +" ";
    ans+="("+ to_string(p)+") ";
    v.clear();
    for(int i = 1 ; i<=k ; i++)
    {
        if(p+i<=n)v.push_back(p+i);
    }
    for(auto i : v)ans+= to_string(i) +" ";
    if(v[v.size()-1]<n)ans+=">>";
    cout<<ans;
}