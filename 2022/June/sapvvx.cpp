#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n;cin>>n;
    map<int,int>mp;
    for(int i = 0 ; i < n ; i++)
    {
        int h1,h2;
        cin>>h1>>h2;
        if(h1==1)mp[h2]=1;
        else if(h1==2)mp[h2]=0;
        else
        {
            mp[h2]?cout<<"Yes"<<"\n":cout<<"No"<<"\n";
        }
    }


}