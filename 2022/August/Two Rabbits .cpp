#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main ()
{
        pre;
        int t;cin>>t;
        while(t--)
        {
            ll a,b,c,d;cin>>a>>b>>c>>d;
            ll ans=(b-a)/(c+d);
            if((b-a)%(c+d)!=0)ans=-1;
            cout<<ans<<"\n";
        }

}