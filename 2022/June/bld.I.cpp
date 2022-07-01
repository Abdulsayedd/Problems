#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m;cin>>n>>m;
    int y = max(n,m),x=min(n,m);
    long long sum = y*(y+1)/2 - x*(x+1)/2 + x;
    //cout<<sum<<"\n";
    if(sum%2==0)cout<<"Nasser";
    else cout<<"Hoss";
}