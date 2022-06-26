#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    bobo;
    int a,b;
    cin>>a>>b;
    int x[a];
    for ( int i = 0 ; i < a ; i++)
    {
        cin>>x[i];
    }
    sort(x,x+a);
    for ( int i = 1 ; i <= b ; i++)
    {
        int coun=0;
        for ( int j = 0 ; j < a ; j++)
        {
            if (x[j]==i)
            {
                coun++;
            }
        }
        cout<<coun<<endl;
    }


}
