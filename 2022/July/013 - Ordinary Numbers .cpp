#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
            long long n,m;cin>>n;m=n;
            long long c=0,f=0;
            for(int i = 1 ; i < 10; i++)
            {
                f=i;
                while(f<=n)
                {
                    c++;f*=10;f+=i;
                }
            }
            cout<<c<<"\n";
    }
}

