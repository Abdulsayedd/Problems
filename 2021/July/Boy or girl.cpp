#include <bits/stdc++.h>
using namespace std ;
int main ()
    {
        string x;
        cin>>x;
        int y=x.length(),z=0;
        for(int i =1;i<x.size();i++)
        {
            for ( int j=0;j<i;j++)
            {
                if (x[i]==x[j])
                {
                    y--;
                    break;
                }
            }
        }
        if (y%2==0)
        {
            cout<<"CHAT WITH HER!";
        }
        else
        {
            cout<<"IGNORE HIM!";
        }
    }
