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
      unsigned long long x,y,a,b;
      cin>>x>>y>>a>>b;
      unsigned long long sum=0;
      unsigned long long mn=min(x,y),mx=max(x,y);
      while(mx!=mn)
      {
          mx--;
          sum+=a;
      }
      if(2*a<b)sum+=mx*(2*a);
      else sum+=mx*b;
      cout<<sum<<"\n";
    };
}