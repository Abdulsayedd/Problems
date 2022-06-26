    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            int n;cin>>n;
            int arr[n];
            int minn=INT_MAX;
            for(int i = 0 ; i < n ; i++)
            {
                cin>>arr[i];
                minn=min(arr[i],minn);
            }
            int sum=0;
            for(int i = 0 ; i < n ; i++)
            {
                sum+=arr[i]-minn;
            }
            cout<<sum<<endl;
        };
    }