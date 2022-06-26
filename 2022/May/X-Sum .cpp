    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;

    int main () {
        pre;
        testcase
        {
            int n,m;cin>>n>>m;
            int arr[n][m];
            for(int i = 0 ; i < n ; i++)for(int j = 0 ; j < m ; j++)cin>>arr[i][j];
            int maxx=0,sum=0;
            for(int i = 0 ; i < n ; i++)
            {
                for(int j = 0 ; j < m ; j++)
                {

                    for(int i1=i,j1=j ; i1 < n && j1<m ; i1++,j1++)
                    {
                        sum+=arr[i1][j1];
                    }
                    for(int i1=i-1,j1=j-1 ; i1 >=0  && j1>=0 ; i1--,j1--)
                    {
                        sum+=arr[i1][j1];
                    }
                    for(int i1=i+1,j1=j-1 ; i1 < n && j1>=0 ; i1++,j1--)
                    {
                        sum+=arr[i1][j1];
                    }
                    for(int i1=i-1,j1=j+1 ; i1 >=0  && j1< m ; i1--,j1++)
                    {
                        sum+=arr[i1][j1];
                    }
                    maxx=max(maxx,sum);
                    sum=0;
                }
            }
            cout<<maxx<<endl;
        };
    }