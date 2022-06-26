    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
int main ()
{
int n;cin>>n;
int arr[12];
for(int i = 0 ; i < 12 ; i++)
{
    cin>>arr[i];
}
sort(arr,arr+12,greater<>());
if(n==0)cout<<0;
else
{
    int sum=0;
    for(int i = 0 ; i < 12 ; i++)
    {
        sum+=arr[i];
        if(sum>=n){cout<<i+1;return 0;}
    }
    cout<<-1;
}
}