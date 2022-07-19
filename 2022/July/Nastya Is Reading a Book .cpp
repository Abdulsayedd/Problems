//https://codeforces.com/group/UZxBcPr4qR/contest/248942/problem/A
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    map<int,int>mp;
    while(t--)
    {
        int l,r;cin>>l>>r;
        for(int i = l ; i <= r ; i++)
        {
            mp[i]=t+1;
        }
    }
    cin>>t;
    cout<<mp[t];
}