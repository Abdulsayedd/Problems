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
        unsigned long long c=0;
        while(true)
        {
            if(n<1)
            {cout<<-1<<"\n";break;}
            else if(n==1){cout<<c<<"\n";break;}
            if(n%6==0){n/=6;c++;}
            else {n*=2;c++;}
        }
    };
}