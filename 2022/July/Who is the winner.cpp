#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int p1[3],p2[3];
        int p[3]={},winner{};
        for(int i = 0 ; i < 3;i++)cin>>p1[i];
        for(int i = 0 ; i < 3;i++)cin>>p2[i];
        for(int i = 0 ; i < 3 ; i++)
        {
            if(p1[i]<p2[i])  p[i]=1;
            else if(p1[i]>p2[i])  p[i]=2;
        }
        for(int i = 0 ; i < 3 ; i++)
        {
            if(p[i]==1)
            {
                winner=1;break;
            }
            else if(p[i]==2)
            {
                winner=2;break;
            }
        }
        if(winner)cout<<"Player"<<winner<<"\n";
        else cout<<"Tie"<<"\n";
    }
}