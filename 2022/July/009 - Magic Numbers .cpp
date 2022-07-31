#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    string x;cin>>x;
    bool f = true;
    int i = 0;
    while(f)
    {
        if(i>=x.size())break;
        if(x.substr(i,3)=="144")i+=3;
        else if(x.substr(i,2)=="14")i+=2;
        else if(x[i]=='1')i++;
        else f=false;
    }
    f?cout<<"YES":cout<<"NO";
}

