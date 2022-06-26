#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x,y,l,r;
    int c1=0,c2=0,c3=0;
    cin>>x;
    cin>>y;
    for ( int i = 0 ; i < x.size();i++)
    {
        if (x[i]=='|')
        {
            for ( int j = i+1 ; j<x.size();j++)
            {
                r+=x[j];
            }
            break;
        }
        else
        {
            l+=x[i];
        }
    }
    for ( int i = 0 ; i < y.size();i++)
    {
        if (r.size()>l.size())
        {
            l+=y[i];
        }
        else
        {
            r+=y[i];
        }
    }
        if(l.size()==r.size())
        {
            cout<<l<<'|'<<r;
        }
        else
        {
            cout<<"Impossible";
        }
    return 0;

}
