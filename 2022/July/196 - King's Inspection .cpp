#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long arr[3];
    for(int i = 0 ; i < 3 ; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    long long ans=0;
    ans+=arr[1]-arr[0];
    arr[2]+=ans;
    ans+=arr[2]-arr[1];
    cout<<ans;

}