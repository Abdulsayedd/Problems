#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    bobo;
    int a,b,coun=0;
    cin>>a>>b;
    int x[a],y[b];
    for ( int i = 0; i < a ; i++)
    {
        cin>>x[i];
    }
        for ( int j = 0; j < b ; j++)
    {
        cin>>y[j];
    }
    for (int i = 0 ; i < b ; i++)
    {
        for ( int  j = 0 ; j < a ; j++)
        {
            if (y[i]==x[j])
            {
                coun++;
                i++;
            }
        }
    }
    if (coun==b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
