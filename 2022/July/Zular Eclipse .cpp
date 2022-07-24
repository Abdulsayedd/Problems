#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long n,m;cin>>n;m=n;
    long long mn=INT_MAX;
    vector<long long>arr(n);
    for(long long &i : arr)cin>>i,mn=min(i,mn);
    sort(arr.begin(),arr.end());
    long long freq[n+1];
    freq[0]=0;
    for(long long i = 1 ; i < n+1 ; i++)
    {
        freq[i]=arr[i-1]+freq[i-1];
    }
    long long q;cin>>q;
    while(q--)
    {
        long long h;cin>>h;
        long long u = upper_bound(arr.begin(),arr.end(),h)-arr.begin();
        if(h<mn)cout<<-1;
        else cout<<u<<" "<<freq[u];
        cout<<"\n";
    }
}