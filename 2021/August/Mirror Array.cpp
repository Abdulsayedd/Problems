    #include <bits/stdc++.h>
    #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        bobo;
        int n,m;
        cin>>n>>m;
        for ( int i = 0 ; i < n ; i ++)
        {
            int x[m];
            for ( int j = 0 ; j < m ; j++)
            {
                cin>>x[j];
            }
            for (int k = m-1 ; k >= 0 ; k--)
            {
                cout<<x[k]<<" ";
            }
            cout<<endl;

        }
    }
