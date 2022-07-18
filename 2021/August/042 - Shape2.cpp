        #include <bits/stdc++.h>
        using namespace std ;
        int main ()
        {
            int n,k=1,l=1;
            cin>>n;
            int o=n;
            while(n--)
            {

                for ( int i = n ; i>0 ;i--)
                {
                    cout<<" ";
                }
                for(int i=1 ; i<=(2*k-1);i++)
                {
                    cout<<"*";
                }
                cout<<endl;
                k++;
                l++;
            }
        }
