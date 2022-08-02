#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main ()
{
        pre;
        int t;cin>>t;
        ll sum1=0,sum2=0,sum1a=0,sum1b=0;
        while(t--)
        {
            int a,b,c;cin>>a>>b>>c;
            if(a==1)
            {
                sum1+=b+c;
                sum1a+=b;
            }
            else sum2+=b+c,sum1b+=b;
        }
        if(sum1/2<=sum1a)cout<<"LIVE";
        else cout<<"DEAD";
        cout<<"\n";
        if(sum2/2<=sum1b)cout<<"LIVE";
        else cout<<"DEAD";
}