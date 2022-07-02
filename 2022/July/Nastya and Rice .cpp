#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,a,b,c,d;cin>>n>>a>>b>>c>>d;
        ((n*(a+b))>=(c-d))?((n*abs(a-b)<=(c+d)))?cout<<"Yes"<<"\n":cout<<"No"<<endl:cout<<"No"<<endl;
    }
}

