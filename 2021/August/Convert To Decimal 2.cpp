        #include <bits/stdc++.h>
        using namespace std ;
        int main ()
        {
            int t;
            cin>>t;
            while (t--)
            {
            unsigned long long n,coun=1,k=1,sum=0;
            cin>>n;
            while (n>1)
            {
                if (n%2!=0)
                {
                    coun++;
                }
                n/=2;
            }
            for ( int i = 0 ; i < coun;i++)
            {
                k*=2;
                sum+=k;
            }
            cout<<sum/2<<endl;
        }
        }
