#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,m;cin>>n>>m;
    int arr[n];
    for(int i = 0 ; i < n ; i++)    cin>>arr[i];
    int l,sum,mnindx,mnsum,r=m-1;
    sum=l=0;
    mnsum=mnindx=INT_MAX;
    for(int i = 0 ; i < m ; i++)    sum+=arr[i];
    while(l+m-1<n)
    {
        if(sum<=mnsum)
        {
            mnsum=sum;
            mnindx=l+1;
        }
        sum-=arr[l++];
        r++;
        sum+=arr[r];
    }
    cout<<mnindx;
}