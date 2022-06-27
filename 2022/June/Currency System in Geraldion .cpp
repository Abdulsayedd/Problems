#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m,mn=INT_MAX;cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>m;
        mn=min(m,mn);
    }
    mn==1?cout<<-1:cout<<1;
}