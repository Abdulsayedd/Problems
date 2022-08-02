#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main (){
        pre;
        ll n,m;cin>>n>>m;
        ll arr[n];
        for(ll i = 0 ; i < n ;i++)
        {
            cin>>arr[i];
        }
        if(n%m)cout<<-1;
        else
        {
            sort(arr,arr+n);
            ll sum=0;
            ll steps=n/m-1;
            ll i=0;
            while(i<n)
            {
                sum+=arr[i+steps]-arr[i];
                i+=steps+1;
            }
            cout<<sum;
        }
}