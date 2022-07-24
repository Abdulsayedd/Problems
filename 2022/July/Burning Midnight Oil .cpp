#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
long long fastpow(long long b, long long p) {
    if (!p) return 1;
    long long ans = fastpow(b, p >> 1);
    ans *= ans;
    if (p & 1) ans *= b;
    return ans;
}
int main () {
    pre;
    long long n,s;cin>>n>>s;
    long long l=0,r=n;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        long long sum=mid,i=1;
        while((mid/fastpow(s,i))>0)
        {
            sum+=mid/fastpow(s,i++);
        }
        if(sum>=n)r=mid-1;
        else l=mid+1;
    }
    cout<<l;
}