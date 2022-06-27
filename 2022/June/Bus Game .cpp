#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int c=0,n,m;cin>>n>>m;
    while(true)
    {
        if(c==0)
        {
            if(n>=2)
            {
                n-=2;
                if(m>=2)
                {
                    m-=2;
                }
                else {cout<<"Hanako";return 0;}
            }
            else
            {
                if(n==1 && m>=12)
                {
                    n--;
                    m-=12;
                }
                else
                {
                    if(n==0 &&m>=22)m-=22;
                    else {cout<<"Hanako";return 0;}
                }
            }
            c=1;
        }
        else
        {
            if(m>=22)m-=22;
            else
            {
                if(m>=12 && n>=1)
                {
                    m-=12;
                    n-=1;
                }
                else
                {
                    if(m>=2 && n>=2)
                    {
                        m-=2;n-=2;
                    }
                    else {cout<<"Ciel";return 0;}
                }
            }
            c=0;
        }
    }
}