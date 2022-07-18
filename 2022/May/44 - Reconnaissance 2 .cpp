    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        int n;cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)cin>>arr[i];
        int ps=INT_MAX;
        pair<int,int>p;
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(abs(arr[i]-arr[i+1])<ps)
            {
                ps=abs(arr[i]-arr[i+1]);
                p.first=i+1;
                p.second=i+2;
            }
        }
        if(abs(arr[0]-arr[n-1])<ps)
        {
            p.first=n;
            p.second=1;
        }
        cout<<p.first<<" "<<p.second<<endl;
    }