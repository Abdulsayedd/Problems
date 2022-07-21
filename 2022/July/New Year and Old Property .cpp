// https://codeforces.com/group/4BawYTBUCN/contest/379570/problem/H
#include <bits/stdc++.h>
using namespace std;
long long fun(long long L, long long R)
{
    long long ans = 0;
    long long LogR = log2(R) + 1;
    for (long long i = 0; i < LogR; i++) {
        long long cur = 0;
        for (long long j = 0; j < i; j++)cur |= (1LL << j);
        for (long long j = i + 1;j < LogR; j++)
        {
            cur |= (1LL << j);
            if (cur >= L && cur <= R)ans++;
        }
    }
    return ans;
}
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long l,r;cin>>l>>r;
    cout<<fun(l,r);
}