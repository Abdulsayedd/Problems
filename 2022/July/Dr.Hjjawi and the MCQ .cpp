#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    map<char,int>mp;
    int n;cin>>n;
    string x;cin>>x;
    int mn=INT_MAX;
    int mx{};
    for(char i : x)mp[i]++;
    for(auto i : mp)
    {
        mn=min(mn,i.second);
        mx=max(mx,i.second);
    }
    mn*=mp.size()==5;
    cout<<mn<<" "<<mx;
}