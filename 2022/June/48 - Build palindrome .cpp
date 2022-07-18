#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool fun(string x)
{
    string m=x;
    reverse(m.begin(),m.end());
    return m==x;
}
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x,y;cin>>x;
        for(int i = 0 ; i < x.size() ; i++)
        {
            y=x.substr(i,x.size()-i);
            if(fun(y))
            {
                cout<<x.size()-y.size()<<"\n";
                break;
            }
        }
    }
}