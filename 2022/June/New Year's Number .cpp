#include <bits/stdc++.h>
#define testcase int t;cin>>t;while(t--)
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    //freopen ("bbbb.in","r", stdin) ;
    pre;
    testcase
    {
        unsigned long long n;
        cin>>n;
        bool f = false;
        unsigned long long alfen=0,alfenw=0,calc=0;
        if(n<2020)cout<<"NO"<<endl;
        else
        {
            alfen = (n/2020);
            while(alfen!=-1)
            {
                unsigned long long ans =((alfen*2020) + (alfenw*2021));
                if(ans==n){cout<<"YES"<<endl;f=true;break;}
                else
                {

                    alfen--;alfenw++;
                }
            }
            if(!f)cout<<"NO"<<endl;
        }
    };
}