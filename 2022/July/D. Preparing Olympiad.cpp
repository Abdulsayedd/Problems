//============================
// Name        : D. Preparing Olympiad
// Author      : Abdulsayed
// Version     : 2022
// Description : BitWise
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,l,r,x,mn,mx,c,sum,ans=0;
    cin>>n>>l>>r>>x;
    int arr[n];
    for(int i = 0 ; i < n ; i++)cin>>arr[i];
    for(int mask = 0 ; mask <= (1llu<<n)-1 ; mask++)
    {
        c=0,sum=0,mx=0,mn=INT_MAX;
        for(int i = 0 ;i < n ; i++)
        {
            if((mask&(1llu<<i)))// choosen prob
            {
                c++;
                sum+=arr[i];
                mn=min(mn,arr[i]);
                mx=max(mx,arr[i]);
                // cout<<mx<<" "<<mn<<" "<<sum<<" "<<c<<"\n";
            }
        }
        if(mx-mn>=x && sum>=l && sum<=r && c>1 )ans++;
    }
    cout<<ans;
}