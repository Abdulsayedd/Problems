    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        int n;cin>>n;
        int arr[n],f[1005]{};
        deque<int>v;
        for(int i = 0 ;i < n ; i++)
        {
            cin>>arr[i];
        }
        for(int i = n-1 ;i>=0 ;i--)
        {
            if(f[arr[i]]==0)
            {
                v.push_front(arr[i]);
                f[arr[i]]++;
            }
        }
        cout<<v.size()<<"\n";
        for(auto i : v)cout<<i<<" ";


    }