#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    bobo;
    long long a,b,c,d;
    int f=0;
    cin>>a>>b>>c>>d;
    if ((a+b-c)==d)
    {
        f=1;
    }
    else if ((a-b+c)==d)
    {
        f=1;
    }
    else if ((a-b*c)==d)
    {
        f=1;
    }
    else if ((a*b-c)==d)
    {
        f=1;
    }
    else if ((a*b+c)==d)
    {
        f=1;
    }
    else if ((a+b*c)==d)
    {
        f=1;
    }
    f==1?cout<<"YES"<<endl:cout<<"NO"<<endl;

}
