    #include <bits/stdc++.h>
    #define ll long long
    //#define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
          int n;cin>>n;
          int arr[n];
          for(int &i : arr) cin>>i;
          sort(arr,arr+n);
          int sum=0;
          for(int i = 0 ; i < n ; i+=2)
          {
              sum+=abs(arr[i]-arr[i+1]);

          }
          cout<<sum;

    }