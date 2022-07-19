//https://codeforces.com/contest/1365/problem/B
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t,n,sum1,sum2,h;cin>>t;
    while(t--)
    {
        string ans;
        sum1=sum2=0;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ;i++)
        {
            cin>>arr[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin>>h;
            if(h==1)sum1=1;
            else sum2=1;
        }
        if(is_sorted(arr,arr+n) || (sum1&&sum2))ans="Yes";
        else ans="No";
        cout<<ans<<"\n";
    }
}