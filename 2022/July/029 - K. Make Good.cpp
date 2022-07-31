//============================
// Name        : K. Make Good
// Author      : Abdulsayed
// Version     : 2022
// Description : BitWise
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    unsigned long long t;cin>>t;
    while(t--)
    {
        unsigned long long n,sum=0,xr=0;cin >> n;
        unsigned long long arr[n];
        for (unsigned long long i = 0; i < n; i++)cin >> arr[i];
        for (unsigned long long i = 0; i < n; i++)sum+=arr[i],xr^=arr[i];
        cout<<2<<"\n"<<xr<<" "<<xr+sum<<"\n";
    }
}