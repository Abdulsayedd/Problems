#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n;cin>>n;
    map<string,int>mp;
    for(int i = 0 ; i < n ; i++)
    {
        int h1,h3;
        string h2;
        cin>>h1;
        if(h1==1)
        {
            cin>>h2>>h3;
            mp[h2]+=h3;
        }
        else if(h1==2)

        {
            cin>>h2;
            mp[h2]=0;
        }
        else
        {
            cin>>h2;
            cout<<mp[h2]<<"\n";
        }
    }


}