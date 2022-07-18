#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n;cin>>n;
    vector<int>v(n/2);
    cout<<n/2<<"\n";
    for(int i = 0 ; i < n/2 ; i++)v[i]=2;
    if(n%2!=0)v[(n/2)-1]=3;
    for(auto i : v)cout<<i<<" ";
}