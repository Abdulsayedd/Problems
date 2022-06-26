        #include <bits/stdc++.h>
        using namespace std ;
        int main ()
        {
            int n;
            cin>>n;
            while (n--)
            {
                string x;cin>>x;
                for ( int i = x.size()-1 ; i>=0 ;i--)
                {
                    cout<<x[i]<<" ";
                }
                cout<<endl;
            }
        }
