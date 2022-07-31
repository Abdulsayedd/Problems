#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
vector<int> ooss(long long L, long long R) {
    vector<char> isPrime(R - L + 1, true);
    vector<int>v;
    long long lim = sqrt(R);
    for (long long i = 2; i <= lim; ++i)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    for(int i = 0 ; i < isPrime.size() ; i++)
    {
        if(isPrime[i]==true)
        {
            v.push_back(i+L);
        }
    }
    return v;
}
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int l,r;cin>>l>>r;
        vector<int>v=ooss(l,r);
        for(auto i : v)cout<<i<<"\n";
        cout<<"\n";
    }
}