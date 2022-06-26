    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        pre;
        int n;cin>>n;
        int arr[n];
        int c=0;
        for(int i = 0  ; i < n ; i++)cin>>arr[i];
        sort(arr,arr+n);
        for(int i = 0 ; i < n-1 ; i++)
        {
            while(arr[i+1]-arr[i]!=1)
            {
                arr[i]++;
                c++;
            }
        }
        cout<<c;

    }