#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n,o;
        cin>>n;
        while (n--)
        {
            int l;
            cin>>l;
            long long x[l];
            long long sum1=0,sum2=0;
            for ( int i = 0 ; i < l ; i ++)
            {
                cin>>x[i];
            }
            if (l==2)
            {
                cout<<x[0]*x[1]<<endl;
            }
            else
            {
                for ( int i = 0 ; i < l-1 ; i ++)
                {
                    sum2=x[i]*x[i+1];
                    sum1=max(sum2,sum1);
                }
                cout<<sum1<<endl;
            }

        }
}
