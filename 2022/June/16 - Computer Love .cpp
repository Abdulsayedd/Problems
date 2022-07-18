#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m;cin>>n>>m;
    long long h=-1;
    for(int i = 0 ; i < m ; i++)
    {
        long long s= pow(2,i);
        if(s>m)break;
        if(s>=n && s<=m)h=s;
    }
    cout<<h<<"\n";
}