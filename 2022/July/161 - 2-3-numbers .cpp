// https://codeforces.com/group/UZxBcPr4qR/contest/249115/problem/D
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    long long l,r,c=0;
    cin>>l>>r;
    for(long long i = 1 ; i <= r ; i*=2)
        for(long long j = 1 ; j<=r ; j*=3)
            if(i*j>=l && i*j<=r)
                c++;
    cout<<c;
}