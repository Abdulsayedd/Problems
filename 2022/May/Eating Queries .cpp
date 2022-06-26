    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;

    int main () {
        pre;
        testcase
        {
            long long n,q;cin>>n>>q;
            long long arr[n];
            long long sum1=0;
            for(long long i = 0 ; i < n ; i++)
            {
                cin>>arr[i];
                sum1+=arr[i];
            }
            sort(arr,arr+n,greater<>());
            vector<int>arr1(n+1,0);
            for(long long i = 1; i < n+1 ; i++)
            {
                arr1[i]=arr1[i-1]+arr[i-1];
            }
           /* for(int i = 0 ; i < n+1 ; i++)cout<<arr1[i]<<" ";
            cout<<"\n";*/
            //30 21 16 12 8 5 2 1 0
            while(q--)
            {
                long long h;cin>>h;
                if(arr1.size()==1)
                {
                    if(sum1>=h)cout<<1<<endl;
                    else cout<<-1<<endl;
                }
                else {
                    if (sum1 < h)cout << -1 << endl;
                    else {
                        auto it = lower_bound(arr1.begin(), arr1.end(), h);
                        cout << it - arr1.begin() << endl;
                    }
                }
            }
        };
    }