#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long n,m;cin>>n>>m;
    long long arr[n];
    map<long long,long long>mp;
    long long mx,sum,total;
    mx=sum=total=0;

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    for(auto i : arr)
    {
        sum+=i;//-1 0
        if(mp[sum-m]!=0)mx+=mp[sum-m];//0
        mp[sum]++;//-1
        if(sum==m)mx++;
    }
    cout<<mx;
}