    #include <bits/stdc++.h>
    #include <iostream>
    #include <cstring>
    using namespace std ;
    int main ()
    {
        int n ;
        cin>>n;
        string m;
        getline(cin,m);
        string x;
        while (n--)
        {
        getline(cin,x);
        int m = x.size();

        if (m%2==0)
        {
            if (x[(m/2)-1]==' ')
            {
            cout<<"YES"<<endl;
            }
            else
            {
            cout<<"NO"<<endl;
            }
        }
        else
        {
            if (x[(m/2)]==' ')
            {
            cout<<"YES"<<endl;
            }
            else
            {
            cout<<"NO"<<endl;
            }

        }

        }


    }
