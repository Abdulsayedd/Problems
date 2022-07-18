#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m,z,c=0;cin>>n>>m>>z;
    int summ=m,sumn=n;
    map<int,int>mp;
    while(summ<=z)
        mp[summ]=1,summ+=m;
    while(sumn<=z)
    {
        if(mp[sumn])c++;
        sumn+=n;
    }
    cout<<c<<"\n";
}