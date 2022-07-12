#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
   string x,y;
    cin>>x>>y;
    if(x.size()==y.size())
    {
        for(int i = 0 ; i < x.size() ; i++)
        {
            cout<<x[i]<<y[i];
        }
    }
    else
    {
        if(x.size()>y.size())
        {
            for(int i = 0 ; i < y.size() ; i++)
            {
                cout<<x[i]<<y[i];
            }
            for(int i = y.size() ; i <x.size() ;i++)
            {
                cout<<x[i];
            }
        }
        else
        {
            for(int i = 0 ; i < x.size() ; i++)
            {
                cout<<x[i]<<y[i];
            }
            for(int i = x.size() ; i <y.size() ;i++)
            {
                cout<<y[i];
            }
        }
    }
}

