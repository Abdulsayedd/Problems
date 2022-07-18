#include <bits/stdc++.h>
using namespace std ;
int main ()
{
        int a,b,counr=0,counl=0,bbr=0;
        cin>>a>>b;
        string x;
        cin>>x;
        for ( int i = 0 ; i < x.size();i++)
        {
            if (x[i]=='-')
            {
                bbr=i;
                break;
            }
            else
            {
                if (x[i]=='0' || x[i]=='1' || x[i]=='2'|| x[i]=='3'|| x[i]=='4'|| x[i]=='5'|| x[i]=='6'|| x[i]=='7'|| x[i]=='8'|| x[i]=='9')
                {
                    counr++;
                }
            }
        }
        for ( int i = bbr+1 ; i < x.size();i++)
        {
            if (x[i]=='0' || x[i]=='1' || x[i]=='2'|| x[i]=='3'|| x[i]=='4'|| x[i]=='5'|| x[i]=='6'|| x[i]=='7'|| x[i]=='8'|| x[i]=='9')
            {counl++;}
        }
        if (counl==b && counr==a && x.size()==(a+b+1))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
}


