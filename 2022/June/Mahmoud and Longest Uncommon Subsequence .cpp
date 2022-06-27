#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    string x,y;cin>>x>>y;
    if(x.size()==y.size())
    {
        x==y?cout<<-1:cout<<x.size();
    }
    else cout<<max(x.size(),y.size());
}