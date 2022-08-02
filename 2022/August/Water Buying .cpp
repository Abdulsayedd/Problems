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
            ll a,b,c;cin>>a>>b>>c;
            cout<<min(b*a,((a/2)*c)+((a%2)*b))<<"\n";
        }
}