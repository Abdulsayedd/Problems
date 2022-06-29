#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    unsigned long long n,m;cin>>n>>m;
    unsigned long long sum = 0;
    sum = n+m;
    vector<int>v;
    while(sum>0)
    {
        v.push_back(sum%10);
        sum/=10;
    }
    reverse(v.begin(),v.end());
    for(auto i : v)cout<<i<<" ";

}