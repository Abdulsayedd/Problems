    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
            long long n,coun=0;
            cin>>n;
            long long x[n],y[n];
            for (long long i = 0 ; i < n ; i++)
            {
                cin>>x[i];
            }
            for (long long i = 0 ; i < n ; i++)
            {
                cin>>y[i];
            }
            for (long long i = 0 ; i < n ; i ++)
            {
                for ( long long j = i+1 ; j < n ; j++)
                {
                    if (x[i]+x[j]>y[i]+y[j])
                    {
                        coun++;
                    }
                }
            }
            cout<<coun;
    }
