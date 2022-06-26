#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    bobo;
        int n,q;
        cin>>n>>q;
        int x[n];
        for ( int i = 0 ; i < n ; i ++)
        {
            cin>>x[i];
        }
        for ( int i = 0 ; i < q ; i++)
        {

            int l,f=0;
            cin>>l;
            for ( int j = 0 ; j < n ; j++)
            {
                if (x[j]==l)
                {
                f=1;
                }
            }
            f==1?cout<<"found"<<endl:cout<<"not found"<<endl;
        }


}
