#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long pw[40]={};
long long fastpow(long long b, long long p) {
    if (!p) return 1;
    long long ret = fastpow(b, p >> 1);
    ret *= ret;
    if (p & 1) ret *= b;
    return ret;
}
int main () {
    pre;
    int n;cin>>n;
    for(int i = 0 ; i< 40 ; i++)pw[i]=fastpow(2,i);
    set<long long>s;
    for(int i = 1 ; i*i <= n ; i++)
    {
        if(n%i==0)
        {
            s.insert(n/i);
            s.insert(i);
        }
    }
    for(auto i=s.rbegin() ; i!=s.rend() ; i++)
    {
        for(int j = 1 ; j < 40 ; j++)
        {
            if(((pw[j]-1) * pw[j-1])==*i)
            {
                cout<<*i;return 0;
            }
        }
    }
}