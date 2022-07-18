    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            int n;cin>>n;int n1;cin>>n1;
            string arr[n];
            int minn=INT_MAX;
            for(int i = 0 ; i < n ;i++)
            {
                cin>>arr[i];
            }
            for(int i = 0 ; i < n ; i++)
            {
                for(int j = i+1 ; j < n ; j++)
                {
                    int s=0;
                    for(int k = 0 ; k < n1;k++)
                    {
                        s+=abs(arr[i][k]-arr[j][k]);
                    }
                    minn=min(minn,s);
                }
            }
            cout<<minn<<"\n";
        };
    }