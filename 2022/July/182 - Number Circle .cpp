// https://codeforces.com/contest/1189/problem/B
#include <bits/stdc++.h>
using namespace std;
#define a7 {cout<<"NO";return 0;}
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long n;cin>>n;
    vector<long long>v;
    for(int i = 0 ; i < n ; i++)
    {
        long long h ;cin>>h;
        v.push_back(h);
    }
    sort(v.begin(),v.end());
    long long papa=v.size()-1;
    if(v[papa]>=v[papa-1]+v[papa-2])a7
    swap(v[papa],v[papa-1]);
    cout<<"YES"<<"\n";
    for(auto i : v)cout<<i<<" ";
}