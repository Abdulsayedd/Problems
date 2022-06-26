#include <bits/stdc++.h>
using namespace std ;
int main ()
    {
int n ,counta=0,countd=0;
cin>>n;
string x;
cin>>x;
for ( int i =0 ;i<x.size(); i++)
    {
        if (x[i] == 'A')
        {
            counta++;
        }
        else
        {
            countd++;
        }
    }
    if (counta>countd)
    {
        cout<<"Anton";
    }
        else if (countd>counta)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}
