    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        int n,m=1,c;cin>>n>>c;
        int arr[n];
        for(int i = 0 ; i < n ; i++)cin>>arr[i];
        for(int i = n-1 ; i >=0 ;i--)
        {
            if(arr[i]-arr[i-1]<=c)m++;
            else break;
        }
        if(m>n)m=n;
        cout<<m;
    }