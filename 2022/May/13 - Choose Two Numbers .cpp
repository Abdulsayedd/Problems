    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        pre;
        map<int,int>m;
        int n;cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];m[arr[i]]=1;
        }
        int mm;cin>>mm;
        int arr1[mm];
        for(int i = 0 ; i < mm ; i++)
        {
            cin>>arr1[i];m[arr1[i]]=1;
        }
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < mm; j++)
                if(m[arr[i]+arr1[j]]==0)
                {cout<<arr[i]<<" "<<arr1[j];return 0;}

    }