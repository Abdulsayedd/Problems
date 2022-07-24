#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long n ,s;cin>>n>>s;
    long long arr[n];
    long long sum=0;
    for(long long i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    long long l=0,r=n,mid,k=0,sum1=0;
    map<long long,long long>mp;
    while(l<=r)
    {
        sum=0;
        mid=(l+r)/2;
        vector<long long>v;
        for(int i = 0; i < n ; i++)
        {
            v.push_back(arr[i]+((i+1)*mid));
        }
        sort(v.begin(),v.end());
        for(int i = 0 ; i < mid; i++)
        {
            sum+=v[i];
        }
        if(sum<=s)
        {
            sum1=sum;
            k=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<k<<" "<<sum1;
}