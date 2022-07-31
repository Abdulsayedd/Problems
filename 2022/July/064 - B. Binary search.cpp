//============================
// Name        : B. Binary search
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/gA8A93jony/contest/269931/problem/B
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int fun(int srch,int l,int r,vector<int>&v)
{
    if(l>r)return -1;
    int mid=(l+r)/2;
    if(srch==v[mid])return mid+1;
    if(srch>v[mid])return fun(srch,mid+1,r,v);
    if(srch<v[mid])return fun(srch,l,mid-1,v);
}
int main () {
    pre;
    int n,m;cin>>n;m=n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++)cin>>v[i];
    //for(auto i : v)cout<<i<<" ";
    cin>>m;
    while(m--)
    {
        int srch;cin>>srch;
        cout<<fun(srch,0,v.size()-1,v)<<"\n";
    }
}