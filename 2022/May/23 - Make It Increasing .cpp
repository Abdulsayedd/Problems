    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        pre;
        testcase
        {
         int n;cin>>n;
         int arr[n];
         int c=0;
         for(int i = 0 ; i < n ; i++)cin>>arr[i];
         for(int i = n-1 ; i >=0 ; i--)
         {
             for(int j = i-1;j>=0;j--)
             {
                 while(arr[i]<=arr[j])
                 {
                     arr[j]/=2;
                     c++;
                     if(arr[j]==0)break;
                 }
             }
         }
         bool f=false;
         for(int i = 0 ; i < n-1 ; i++)
         {
             if(arr[i]>=arr[i+1])
             {
                 f=true;break;
             }
         }
         f?cout<<-1<<endl:cout<<c<<endl;
        };
    }