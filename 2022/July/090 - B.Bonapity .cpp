#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x,y;
        cin>>x>>y;
        for(int i = 0 ; i < x.size(); i++)x[i]|=' ',y[i]|=' ';
        for(int i = 0 ; i <x.size() ; i++)
        {
            if(x[i]=='i')x[i]='e';
            if(x[i]=='b')x[i]='p';
        }
        for(int i = 0 ; i <y.size() ; i++)
        {
            if(y[i]=='i')y[i]='e';
            if(y[i]=='b')y[i]='p';
        }
        x==y?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
}