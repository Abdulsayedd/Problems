        #include <bits/stdc++.h>
        using namespace std ;
        int main ()
        {
            long long t=9999999999999;
            while (t--)
            {
            int n,m;
            cin>>n>>m;
            if (n<=0 || m<=0)
            {
                return 0;
            }
            else
            {
                int sum=0;
                int minn=min(m,n);
                int maxx=max(m,n);
                for ( int i = minn ; i <=maxx ; i++)
                {
                    cout<<i<<" ";
                    sum+=i;
                }
                cout<<"sum ="<<sum<<endl;
            }
            }
        }
