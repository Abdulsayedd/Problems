#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    string x;cin>>x;
    bool f = false;
    for(int i = 0 ; i < x.size()-2 ;i++)
    {if(x[i]==x[i+1] || x[i]==x[i+2] || x[i+1]==x[i+2])
        {f=true;break;}}
    f?cout<<"YES"<<endl:cout<<"NO"<<endl;
}