#include <bits/stdc++.h>
using namespace std ;
int main ()
        {
   long long a,b,c,d;
   long long ans1,ans2;
   cin>>a>>b>>c>>d;

    if(a>=c)
    {
        ans1=a;
    }
    else
        ans1=c;
    if(b<=d)
    {
        ans2=b;
    }
    else
        ans2=d;

    if(ans1>ans2)
    {
        cout<<-1;
    }
    else
        cout<<ans1<<" " <<ans2;


}


