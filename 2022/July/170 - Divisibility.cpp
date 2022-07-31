// https://codeforces.com/group/80CtVHJnEO/contest/205918/problem/A
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long countDivisibles(long long l, long long r, long long m)
{
    return floor((1.0L*r)/m)-floor((1.0L*l-1)/m);
}
int main () {
    pre;
    long long l,r,m;cin>>m>>l>>r;
    cout<<countDivisibles(l,r,m);
}