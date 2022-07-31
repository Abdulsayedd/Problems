#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n==1)cout<<-1<<"\n";
        else
        {
            string x="4";
            for(int i = 1 ; i < n ; i++)x+='7';
            cout<<x<<"\n";
            //119444.25
        }
    }
}

