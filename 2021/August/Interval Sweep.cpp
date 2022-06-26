#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    bobo;
        int a,b;
        cin>>a>>b;
        if(a==b && a!=0)
        {
            cout<<"YES"<<endl;
        }
        else if ((a+b)%2!=0 && a%2!=0 ||(a+b)%2!=0 && b%2!=0 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}
