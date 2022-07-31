// https://codeforces.com/contest/633/problem/B
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
long long lz_in_fact(long long n)
{
    long long f=0,m=5;
    while(1)
    {
        f+=n/m;
        m*=5;
        if(n/m==0) return f;
    }
}
int main () {
    pre;
    long long n ;cin>>n;vector<long long>v;
    for(long long i = 1 ; i<=900000;i++)
    {
        if(lz_in_fact(i)==n)v.push_back(i);
    }
    if(v.size()==0)cout<<0;
    else {cout<<v.size()<<"\n";for(auto i : v)cout<<i<<" ";}
}