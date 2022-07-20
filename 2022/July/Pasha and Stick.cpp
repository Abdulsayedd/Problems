// https://codeforces.com/group/80CtVHJnEO/contest/205918/problem/E
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    long long n;cin>>n;
    long long ans=n/4;
    if(n%2!=0)ans=0;
    else if(n%4==0)ans--;
    cout<<ans;
}