#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n;cin>>n;
    vector<int>v,v1;
    for(int i = 0 ; i < n ; i++)
    {
        int h;cin>>h;
        v.push_back(h);
        v1.push_back(h);
    }
    if(is_sorted(v.begin(),v.end()))
    {
        cout<<"yes"<<"\n"<<1<<" "<<1;return 0;
    }
    sort(v1.begin(),v1.end());
    int l,r;
    pair<int,int>p;
    for(int i = 0 ; i < v1.size() ;i++)
    {
        if(v[i]!=v1[i]){l=i+1;break;}
    }
    for(int i = v.size()-1 ; i >=0 ;i--)
    {
        if(v[i]!=v1[i]){r=i+1;break;}
    }
   reverse(v.begin()+l-1,v.begin()+r);
   if(v==v1)
   {
       cout<<"yes"<<"\n"<<l<<" "<<r;
   }
   else cout<<"no";

}