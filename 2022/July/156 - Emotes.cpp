//https://codeforces.com/group/UZxBcPr4qR/contest/248942/problem/D
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    unsigned long long h,n,m,k;cin>>n>>m>>k;
    unsigned long long mx1=0,mx2=0;
    vector<unsigned long long>v;
    pair<unsigned long long,unsigned long long>p{0,0};
    for(unsigned long long i = 0 ; i < n ; i++)
    {
        cin>>h;
        v.push_back(h);
    }
    sort(v.begin(),v.end());
    mx1=v[n-1];mx2=v[n-2];
    if(mx2>mx1)swap(mx2,mx1);
    for(auto i : v)
    {
        if(i==mx1)p.first++;
    }
    if(p.first>1)cout<<m*mx1;
    else
    {
        unsigned long long ans=m/(k+1)*(k*mx1+mx2)+m%(k+1)*mx1;
        cout<<ans;
    }

}