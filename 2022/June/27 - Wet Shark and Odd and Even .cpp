#include <bits/stdc++.h>
#define testcase int t;cin>>t;while(t--)
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
unsigned long long sum=0;
int main ()
{
    //freopen ("sss.in","r", stdin);
    pre;
    int n;cin>>n;
    int arr[n];
    for(int &i:arr){cin>>i;sum+=i;}
    sort(arr,arr+n);
    if(sum%2==0)cout<<sum;
    else
        for(int i = 0 ; i < n ; i++)
            if(arr[i]%2!=0){cout<<sum-arr[i];return 0;}
}