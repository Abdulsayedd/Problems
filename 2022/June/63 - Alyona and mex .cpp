#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m,mex=INT_MAX;cin>>n>>m;
    for(int i = 0 ; i < m ; i++)
    {
        int h,h1;cin>>h>>h1;
        mex=min(mex,abs(h1-h)+1);
    }
    cout<<mex<<"\n";
    for(int i = 0 ; i < n; i++)cout<<i%mex<<" ";
}