#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,coun=0;
    cin>>n;
    for (int i = 2 ; i <=n ; i++)
    {
        if (i%2==0)
    {
        coun++;
    }

    }
    if (coun==0)
    {
        cout<<-1;
        return 0;
    }
    else
    {
    for (int i = 2 ; i <= n ; i++)
    {
       if (i%2==0)
       {
           cout<<i<<endl;
       }

    }
    }
}
