#include <bits/stdc++.h>
using namespace std ;
int main ()
{
        int n ,s=0;
        cin>>n;
        int a[n],b[n];
        for ( int i = 0 ; i < n ; i ++)
        {
            cin>>a[i];
        }
        for ( int i = 0 ; i < n ; i ++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for ( int i = 0 ; i < n ; i ++)
        {
            if (a[i]==b[i])
            {
                s=1;
            }
            else
            {
                s=0;
                break;
            }
        }
        s==1? cout<<"yes":cout<<"no";
}
