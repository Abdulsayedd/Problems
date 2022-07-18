#include <bits/stdc++.h>
using namespace std ;
int main ()
        {
            int t;
            cin>>t;
            while(t--)
            {
                int n,k,coun=1;
                cin>>n>>k;
                int x[n];
                for ( int i = 0 ; i < n ; i++)
                {
                    cin>>x[i];
                }
                sort(x,x+n);
                for ( int i = 1 ; i < n ; i ++)
                {
                    if ((x[i]-x[i-1])!=1)
                    {
                        coun++;
                    }
                }
                if (coun>k)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }

                /*
                int n,k,coun=0;
                cin>>n>>k;
                int x[n];
                for ( int i = 0 ; i < n ; i++)
                {
                    cin>>x[i];
                }
                for ( int i=0 ; i < n-1 ; i++)
                {
                    if (x[i]<=x[i+1])
                    {
                        coun++;
                    }
                }
                if ((n-k)==coun)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
                */

            }
        }
