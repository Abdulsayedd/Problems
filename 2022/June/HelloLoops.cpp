#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n;cin>>n;
    for(int i = 1 ; i <=n ; i+=2)cout<<i<<" ";
    cout<<"\n";
    for(int i = 2 ; i <=n ; i+=2)cout<<i<<" ";
}