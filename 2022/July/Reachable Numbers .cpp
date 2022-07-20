// https://codeforces.com/contest/1157/problem/A
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    long long n;cin>>n;
    map<long long,bool>mp;
    while(mp[n]==0)
    {
        mp[n]=1;
        n+=1;
        while(n%10==0)n/=10;
    }
    long long c=0;
    for(auto i : mp)if(i.second>0)c++;
    cout<<c;
}