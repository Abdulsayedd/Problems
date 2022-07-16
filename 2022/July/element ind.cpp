#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,h,q;
    map<int,int>mp;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>h;
        mp[h]=i+1;
    }
    cin>>q;
    while(q--)
        {
            cin>>h;
            if(mp[h])cout<<mp[h]<<"\n";
            else cout<<-1<<"\n";
        }
    }