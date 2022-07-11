// Problem     : C. Train and Queries , https://codeforces.com/problemset/problem/1702/C
// Author      : Abdulsayed
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
      int n,m;cin>>n>>m;
      map<int,pair<int,int>>mp;
      for(int i = 1 ; i <= n ;i++)
      {
          int tmp;cin>>tmp;
          if(!mp[tmp].first)mp[tmp].first=mp[tmp].second=i;
          else mp[tmp].second=i;
      }
      while(m--)
      {
          int l,r;
          cin>>l>>r;
          bool f = (mp[l].first && mp[r].first) && (mp[l].first<mp[r].second);
          f?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
      }
    }
}
