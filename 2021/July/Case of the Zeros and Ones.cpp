    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
        int n ,coun0=0,coun1=0;
        cin>>n;
        string x;
        cin>>x;
        for ( int i = 0 ; i < n ; i ++)
        {
            if(x[i]=='0')
            {
                coun0++;
            }
            else if (x[i]=='1')
            {
                coun1++;
            }
        }
        if ( coun0!=coun1)
        {
         cout<<n-(min(coun0,coun1)*2);
        }
        else
        {
            cout<<0;
        }

    }
