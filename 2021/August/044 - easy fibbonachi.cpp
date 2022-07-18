        #include <bits/stdc++.h>
        using namespace std ;
        int main ()
        {
            long long n;
            cin>>n;
            long long x[n];
            x[0]=0;
            x[1]=1;
            x[2]=1;
            for (int i = 3 ; i < n ; i++)
            {
                x[i]=x[i-1]+x[i-2];
            }
            for ( int i = 0 ; i < n ; i++)
            {
                cout<<x[i]<<" ";
            }
        }
