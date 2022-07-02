#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        unsigned long long a,b,n,s;cin>>a>>b>>n>>s;
        string ans="YES";
        if(((a*n)+b)<s || s%n>b)ans="NO";
        cout<<ans<<"\n";
    }
}