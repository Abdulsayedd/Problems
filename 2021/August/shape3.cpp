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
            for (int i = 1 ; i<=o ;i++)
            {
                for ( int j = 1 ; j<i ;j++)
                {
                    cout<<" ";
                }
                for(int k=i ; k<=(2*o-i);k++)
                {
                    cout<<"*";
                }
                cout<<endl;
        }
        }
