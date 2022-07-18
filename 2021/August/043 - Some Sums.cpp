        #include <bits/stdc++.h>
        using namespace std ;
        int main ()
        {
            int n,a,b,sum=0;
            cin>>n>>a>>b;
            for ( int i = 1 ; i <= n ;i++)
            {
                int sum1=0;
                int k=i;
                while (k!=0)
                {
                    sum1+=k%10;
                    k/=10;
                }
                    if (sum1>=a && sum1<=b)
                    {
                        sum+=i;
                    }
            }
            cout<<sum;
        }
